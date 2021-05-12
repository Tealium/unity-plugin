package com.tealium

import android.app.Application
import android.content.Context
import android.util.Log
import com.tealium.core.Tealium
import com.tealium.core.consent.ConsentCategory
import com.tealium.core.consent.ConsentStatus
import com.tealium.remotecommanddispatcher.remoteCommands
import com.unity3d.player.UnityPlayer
import org.json.JSONArray
import org.json.JSONObject


object TealiumUnity {
    private var tealium: Tealium? = null

    @JvmStatic
    fun initialize(context: Context, config: String) {
        toTealiumConfig(context as Application, JSONObject(config))?.let { tealiumConfig ->
            tealium = Tealium.create(INSTANCE_NAME, tealiumConfig) {
                Log.d(BuildConfig.TAG, "Instance Initialized")
                events.subscribe(EmitterListeners())
            }

            UnityPlayer.UnitySendMessage(
                "TealiumAndroid",
                "HandleInitialized",
                "true"
            )
        } ?: run {
            Log.w(BuildConfig.TAG, "Failed to initialize instance.")

            UnityPlayer.UnitySendMessage(
                "TealiumAndroid",
                "HandleInitialized",
                "false"
            )
        }
    }

    @JvmStatic
    fun terminate() {
        tealium = null
        Tealium.destroy(INSTANCE_NAME)
    }

    @JvmStatic
    fun track(data: String) {
        val dataToJson = JSONObject(data)
        val dataToMap = dataToJson.toFriendlyMap()
        dispatchFromArguments(dataToMap).let {
            tealium?.track(it)
        }
    }

    @JvmStatic
    fun addToDataLayer(data: String, expiry: String) {
        tealium?.apply {
            JSONObject(data).toFriendlyMap().forEach { (key, value) ->
                val exp = expiryFromString(expiry)
                when (value) {
                    is String -> dataLayer.putString(key, value, exp)
                    is Int -> dataLayer.putInt(key, value, exp)
                    is Long -> dataLayer.putLong(key, value, exp)
                    is Double -> dataLayer.putDouble(key, value, exp)
                    is Boolean -> dataLayer.putBoolean(key, value, exp)
                    is JSONObject -> tealium?.dataLayer?.putJsonObject(key, value, exp)
                    is Map<*, *> -> tealium?.dataLayer?.putJsonObject(key, JSONObject(value))
                    is ArrayList<*> -> {
                        when (value.toList().first()) {
                            is Int -> {
                                val formatted = value.toList()
                                    .map { i -> i.toString().toInt() }
                                    .toTypedArray()
                                tealium?.dataLayer?.putIntArray(key, formatted, exp)
                            }
                            is Boolean -> {
                                val formatted = value.toList()
                                    .map { i -> i.toString().toBoolean() }
                                    .toTypedArray()
                                tealium?.dataLayer?.putBooleanArray(key, formatted, exp)
                            }
                            is Long -> {
                                val formatted = value.toList()
                                    .map { i -> i.toString().toLong() }
                                    .toTypedArray()
                                tealium?.dataLayer?.putLongArray(key, formatted, exp)
                            }
                            is Double -> {
                                val formatted = value.toList()
                                    .map { i -> i.toString().toDouble() }
                                    .toTypedArray()
                                tealium?.dataLayer?.putDoubleArray(key, formatted, exp)
                            }
                            else -> {
                                val formatted = value.toList()
                                    .map { i -> i.toString() }
                                    .toTypedArray()
                                tealium?.dataLayer?.putStringArray(key, formatted, exp)
                            }
                        }
                    }
                }
            }
        }
    }

    @JvmStatic
    fun getFromDataLayer(key: String): String? {
        tealium?.dataLayer?.all()?.get(key)?.let { data ->
            val payload = when (data) {
                is Array<*> -> JSONArray(data.toList().map { x -> x.toString() })
                is JSONObject -> data
                else -> data.toString()
            }

            val formattedPayload = JSONObject()
            formattedPayload.put(key, payload)
            return formattedPayload.toString()
        }
        return null
    }

    @JvmStatic
    fun removeFromDataLayer(keys: String) {
        val keyList = JSONArray(keys).toFriendlyList()
        keyList.forEach {
            tealium?.dataLayer?.remove(it as String)
        }
    }

    @JvmStatic
    fun setConsentStatus(status: String) {
        tealium?.consentManager?.userConsentStatus = ConsentStatus.consentStatus(status)
    }

    @JvmStatic
    fun getConsentStatus(): String? {
        return tealium?.consentManager?.userConsentStatus?.value
    }

    @JvmStatic
    fun setConsentCategories(categories: String) {
        val categorySet = mutableSetOf<String>()
        JSONArray(categories).toFriendlyList().map {
            categorySet.add((it as Map<*, *>)["Value"] as String)
        }
        tealium?.consentManager?.userConsentCategories =
            ConsentCategory.consentCategories(categorySet.toSet())
    }

    @JvmStatic
    fun getConsentCategories(): String {
        val formattedCategories =
            JSONArray(tealium?.consentManager?.userConsentCategories?.map { it ->
                it.toString()
            })
        return formattedCategories.toString()

    }

    @JvmStatic
    fun addRemoteCommand(id: String) {
        tealium?.remoteCommands?.add(RemoteCommandListener(id))
    }

    @JvmStatic
    fun removeRemoteCommand(id: String) {
        tealium?.remoteCommands?.remove(id)
    }

    @JvmStatic
    fun joinTrace(id: String) {
        tealium?.joinTrace(id)
    }

    @JvmStatic
    fun leaveTrace() {
        tealium?.leaveTrace()
    }

    @JvmStatic
    fun getVisitorId(): String {
        return tealium?.visitorId ?: ""
    }
}