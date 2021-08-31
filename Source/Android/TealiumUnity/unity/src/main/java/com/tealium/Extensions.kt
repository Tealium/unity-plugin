package com.tealium

import android.app.Application
import android.util.Log
import com.tealium.collectdispatcher.CollectDispatcher
import com.tealium.collectdispatcher.overrideCollectBatchUrl
import com.tealium.collectdispatcher.overrideCollectDomain
import com.tealium.collectdispatcher.overrideCollectUrl
import com.tealium.core.*
import com.tealium.core.collection.AppCollector
import com.tealium.core.collection.ConnectivityCollector
import com.tealium.core.collection.DeviceCollector
import com.tealium.core.collection.TimeCollector
import com.tealium.core.consent.*
import com.tealium.core.persistence.Expiry
import com.tealium.dispatcher.Dispatch
import com.tealium.dispatcher.TealiumEvent
import com.tealium.dispatcher.TealiumView
import com.tealium.lifecycle.Lifecycle
import com.tealium.lifecycle.isAutoTrackingEnabled
import com.tealium.remotecommanddispatcher.RemoteCommandDispatcher
import com.tealium.tagmanagementdispatcher.TagManagementDispatcher
import com.tealium.tagmanagementdispatcher.overrideTagManagementUrl
import com.tealium.visitorservice.VisitorProfile
import com.tealium.visitorservice.VisitorService
import org.json.JSONArray
import org.json.JSONException
import org.json.JSONObject
import java.util.*
import java.util.concurrent.TimeUnit

private fun missingRequiredProperty(name: String) {
    Log.d(BuildConfig.TAG, "Missing required property: $name")
}

fun toTealiumConfig(app: Application, configObj: JSONObject): TealiumConfig? {
    val account = configObj.optString(KEY_CONFIG_ACCOUNT, "")
    val profile = configObj.optString(KEY_CONFIG_PROFILE, "")
    val environmentString = configObj.optString(KEY_CONFIG_ENV, "")

    if (account.isNullOrBlank()) {
        missingRequiredProperty(KEY_CONFIG_ACCOUNT)
        return null
    }

    if (profile.isNullOrBlank()) {
        missingRequiredProperty(KEY_CONFIG_PROFILE)
        return null
    }

    val environment = if (!environmentString.isNullOrBlank()) Environment.valueOf(
        environmentString.toUpperCase(Locale.ROOT)
    )
    else {
        missingRequiredProperty(KEY_CONFIG_ENV)
        Environment.PROD
    }
    val collectors = (configObj.optJSONArray(KEY_CONFIG_COLLECTORS))?.also {
        // Swift has TimeCollector enabled by default
        it.put(COLLECTORS_TIME)
    }?.toCollectorFactories()
    val modules = mutableListOf<Any>().apply {
        (configObj.optBoolean(KEY_VISITOR_SERVICE_ENABLED, false)).let {
            if (it) add(MODULES_VISITOR_SERVICE)
        }
        (configObj.optJSONArray(KEY_CONFIG_COLLECTORS))?.toFriendlyList()?.contains(
            MODULES_LIFECYCLE
        )?.let {
            add(MODULES_LIFECYCLE)
        }
        (configObj.optJSONArray(KEY_CONFIG_MODULES))?.let { modules ->
            val mods2 = modules.toFriendlyList().toList()
            addAll(mods2)
        }
    }.toModuleFactories()
    val dispatchers = (configObj.optJSONArray(KEY_CONFIG_DISPATCHERS))?.toDispatcherFactories()

    val config = TealiumConfig(
        app, account, profile, environment,
        collectors = collectors ?: Collectors.core,
        modules = modules ?: mutableSetOf(),
        dispatchers = dispatchers ?: mutableSetOf()
    )

    config.apply {
        // Data Source Id
        configObj.isNull(KEY_CONFIG_DATA_SOURCE).let {
            if (!it) dataSourceId = configObj.getString(KEY_CONFIG_DATA_SOURCE)
        }

        // Custom Visitor Id
        configObj.isNull(KEY_CUSTOM_VISITOR_ID).let {
            if (!it) existingVisitorId = configObj.getString(KEY_CUSTOM_VISITOR_ID)
        }

        // Collect Settings
        configObj.isNull(KEY_COLLECT_OVERRIDE_URL).let {
            if (!it) overrideCollectUrl = configObj.getString(KEY_COLLECT_OVERRIDE_URL)
        }
        configObj.isNull(KEY_COLLECT_OVERRIDE_BATCH_URL).let {
            if (!it) overrideCollectBatchUrl = configObj.getString(KEY_COLLECT_OVERRIDE_BATCH_URL)
        }
        configObj.isNull(KEY_COLLECT_OVERRIDE_DOMAIN).let {
            if (!it) overrideCollectDomain = configObj.getString(KEY_COLLECT_OVERRIDE_DOMAIN)
        }

        // Library Settings
        configObj.isNull(KEY_SETTINGS_OVERRIDE_URL).let {
            if (!it) overrideLibrarySettingsUrl = configObj.getString(KEY_SETTINGS_OVERRIDE_URL)
        }

        configObj.isNull(KEY_SETTINGS_USE_REMOTE).let {
            if (!it) useRemoteLibrarySettings = configObj.getBoolean(KEY_SETTINGS_USE_REMOTE)
        }

        // Tag Management
        configObj.isNull(KEY_TAG_MANAGEMENT_OVERRIDE_URL).let {
            if (!it) overrideTagManagementUrl = configObj.getString(KEY_TAG_MANAGEMENT_OVERRIDE_URL)
        }

        // Deep Links
        configObj.isNull(KEY_DEEPLINK_TRACKING_ENABLED).let {
            if (!it) deepLinkTrackingEnabled = configObj.getBoolean(KEY_DEEPLINK_TRACKING_ENABLED)
        }

        //QR Trace
        configObj.isNull(KEY_QR_TRACE_ENABLED).let {
            if (!it) qrTraceEnabled = configObj.getBoolean(KEY_QR_TRACE_ENABLED)
        }

        // Log Level
        configObj.isNull(KEY_LOG_LEVEL).let {
            if (!it) Logger.logLevel = LogLevel.fromString(configObj.getString(KEY_LOG_LEVEL))
        }

        // Consent
        configObj.isNull(KEY_CONSENT_LOGGING_ENABLED).let {
            if (!it) consentManagerLoggingEnabled =
                configObj.getBoolean(KEY_CONSENT_LOGGING_ENABLED)
        }

        configObj.isNull(KEY_CONSENT_LOGGING_URL).let {
            if (!it) consentManagerLoggingUrl = configObj.getString(KEY_CONSENT_LOGGING_URL)
        }

        configObj.isNull(KEY_CONSENT_EXPIRY).let {
            if (!it) {
                val expiry = configObj.getJSONObject(KEY_CONSENT_EXPIRY)
                val time = expiry[KEY_CONSENT_EXPIRY_TIME]
                val unit = expiry[KEY_CONSENT_EXPIRY_UNIT]
                consentExpiry =
                    consentExpiryFromValues(time.toString().toLong(), unit.toString())
            }
        }

        configObj.isNull(KEY_CONSENT_POLICY).let {
            if (!it) {
                consentManagerEnabled = true
                consentManagerPolicy =
                    consentPolicyFromString(configObj.getString(KEY_CONSENT_POLICY))
            }
        }

        // Lifecycle
        configObj.isNull(KEY_LIFECYCLE_AUTO_TRACKING_ENABLED).let {
            if (!it) isAutoTrackingEnabled =
                configObj.getBoolean(KEY_LIFECYCLE_AUTO_TRACKING_ENABLED)
        }
    }

    return config
}

fun consentPolicyFromString(name: String): ConsentPolicy? {
    return try {
        ConsentPolicy.valueOf(name.toUpperCase(Locale.ROOT))
    } catch (iax: IllegalArgumentException) {
        null
    }
}

fun consentExpiryFromValues(time: Long, unit: String): ConsentExpiry? {
    if (time <= 0) return null

    val count: Long = if (unit == "months") {
        // No TimeUnit.MONTHS, so needs conversion to days.
        val cal = Calendar.getInstance()
        val today = cal.timeInMillis
        cal.add(Calendar.MONTH, time.toInt())
        (cal.timeInMillis - today) / (1000 * 60 * 60 * 24)
    } else {
        time
    }
    return timeUnitFromString(unit)?.let { ConsentExpiry(count, it) }
}

fun timeUnitFromString(unit: String): TimeUnit? {
    return when (unit) {
        "minutes" -> TimeUnit.MINUTES
        "hours" -> TimeUnit.HOURS
        "days" -> TimeUnit.DAYS
        "months" -> TimeUnit.DAYS
        else -> null
    }
}

fun expiryFromString(name: String?) =
    if (!name.isNullOrBlank()) {
        when (name.toLowerCase(Locale.ROOT)) {
            "forever" -> Expiry.FOREVER
            "untilrestart" -> Expiry.UNTIL_RESTART
            else -> Expiry.SESSION
        }
    } else Expiry.SESSION

fun dispatchFromArguments(data: Map<*, *>): Dispatch {
    val eventType = data[KEY_TRACK_EVENT_TYPE] as String
    val datalayer = data[KEY_TRACK_DATALAYER] as? Map<*, *>

    return when (eventType.toLowerCase(Locale.ROOT)) {
        DispatchType.VIEW -> TealiumView(
            (data[KEY_TRACK_VIEW_NAME] as? String)
                ?: DispatchType.VIEW,
            datalayer as? Map<String, Any>
        )
        else -> TealiumEvent(
            (data[KEY_TRACK_EVENT_NAME] as? String)
                ?: DispatchType.EVENT,
            datalayer as? Map<String, Any>
        )
    }
}

fun JSONArray.toCollectorFactories(): MutableSet<CollectorFactory>? {
    return toFriendlyList().mapNotNull { collectorFactoryFromString(it.toString()) }.toMutableSet()
}

fun collectorFactoryFromString(name: String): CollectorFactory? {
    return when (name) {
        COLLECTORS_APP -> AppCollector
        COLLECTORS_CONNECTIVITY -> ConnectivityCollector
        COLLECTORS_DEVICE -> DeviceCollector
        COLLECTORS_TIME -> TimeCollector
        else -> null
    }
}

fun List<*>.toModuleFactories(): MutableSet<ModuleFactory>? {
    return toTypedArray().mapNotNull { moduleFactoryFromString(it.toString()) }.toMutableSet()
}

fun moduleFactoryFromString(name: String): ModuleFactory? {
    return when (name) {
        MODULES_LIFECYCLE -> Lifecycle
        MODULES_VISITOR_SERVICE -> VisitorService
        else -> null
    }
}

fun JSONArray.toDispatcherFactories(): MutableSet<DispatcherFactory>? {
    return toFriendlyList().mapNotNull { dispatcherFactoryFromString(it.toString()) }.toMutableSet()
}

fun dispatcherFactoryFromString(name: String): DispatcherFactory? {
    return when (name) {
        DISPATCHERS_COLLECT -> CollectDispatcher
        DISPATCHERS_TAG_MANAGEMENT -> TagManagementDispatcher
        DISPATCHERS_REMOTE_COMMANDS -> RemoteCommandDispatcher
        else -> null
    }
}

@Throws(JSONException::class)
fun JSONObject.toFriendlyMap(): MutableMap<String, Any> {
    val map = mutableMapOf<String, Any>()
    val iterator = keys()
    while (iterator.hasNext()) {
        val key = iterator.next()
        when (val value = this[key]) {
            is JSONObject -> {
                map[key] = value.toFriendlyMap()
            }
            is JSONArray -> {
                map[key] = value.toFriendlyList().toList()
            }
            else -> {
                map[key] = value
            }
        }
    }
    return map
}

@Throws(JSONException::class)
fun JSONArray.toFriendlyList(): MutableList<Any> {
    val list = mutableListOf<Any>()
    for (i in 0 until length()) {
        when (val value = this[i]) {
            is JSONObject -> {
                list.add(value.toFriendlyMap())
            }
            is JSONArray -> {
                list.add(value.toFriendlyList())
            }
            is Boolean, is Int, is Double, is String -> {
                list.add(value)
            }
            else -> {
                list.add(value.toString())
            }
        }
    }
    return list
}

internal fun VisitorProfile.Companion.toFriendlyMutableMap(visitorProfile: VisitorProfile): MutableMap<String, Any> {
    val visit = mutableMapOf<String, Any>()

    visitorProfile.currentVisit?.let { current ->
        current.dates?.let {
            visit["dates"] = it
        }
        current.booleans?.let {
            visit["booleans"] = it
        }
        current.arraysOfBooleans?.let {
            visit["arraysOfBooleans"] = it
        }
        current.numbers?.let {
            visit["numbers"] = it
        }
        current.arraysOfNumbers?.let {
            visit["arraysOfNumbers"] = it
        }
        current.tallies?.let {
            visit["tallies"] = it
        }
        current.strings?.let {
            visit["strings"] = it
        }
        current.arraysOfStrings?.let {
            visit["arraysOfStrings"] = it
        }
        current.setsOfStrings?.let {
            visit["setsOfStrings"] = it.map { (key, value) -> value.toList() }
        }
    }

    val visitor = mutableMapOf<String, Any>()
    visitorProfile.audiences?.let {
        visitor["audiences"] = it
    }
    visitorProfile.badges?.let {
        visitor["badges"] = it
    }
    visitorProfile.dates?.let {
        visitor["dates"] = it
    }
    visitorProfile.booleans?.let {
        visitor["booleans"] = it
    }
    visitorProfile.arraysOfBooleans?.let {
        visitor["arraysOfBooleans"] = it
    }
    visitorProfile.numbers?.let {
        visitor["numbers"] = it
    }
    visitorProfile.arraysOfNumbers?.let {
        visitor["arraysOfNumbers"] = it
    }
    visitorProfile.tallies?.let {
        visitor["tallies"] = it
    }
    visitorProfile.strings?.let {
        visitor["strings"] = it
    }
    visitorProfile.arraysOfStrings?.let {
        visitor["arraysOfStrings"] = it
    }
    visitorProfile.setsOfStrings?.let {
        visitor["setsOfStrings"] = it.map { (key, value) -> value.toList() }
    }
    visitor["currentVisit"] = visit

    return visitor
}