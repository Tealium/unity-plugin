package com.tealium

import com.tealium.core.Logger
import com.tealium.core.consent.ConsentManagementPolicy
import com.tealium.core.consent.ConsentStatus
import com.tealium.core.consent.UserConsentPreferences
import com.tealium.core.messaging.UserConsentPreferencesUpdatedListener
import com.tealium.remotecommands.RemoteCommand
import com.tealium.visitorservice.VisitorProfile
import com.tealium.visitorservice.VisitorUpdatedListener
import com.unity3d.player.UnityPlayer
import org.json.JSONException
import org.json.JSONObject

class EmitterListeners() : VisitorUpdatedListener, UserConsentPreferencesUpdatedListener {
    override fun onVisitorUpdated(visitorProfile: VisitorProfile) {
        try {
            VisitorProfile.toFriendlyMutableMap(visitorProfile).let {
                val json = JSONObject(it.toMap())
                UnityPlayer.UnitySendMessage(
                    "TealiumAndroid",
                    "HandleVisitorProfileUpdate",
                    json.toString()
                )
            }
        } catch (jex: JSONException) {
            Logger.qa(BuildConfig.TAG, "${jex.message}")
        }
    }

    override fun onUserConsentPreferencesUpdated(
        userConsentPreferences: UserConsentPreferences,
        policy: ConsentManagementPolicy
    ) {
        if (userConsentPreferences.consentStatus != ConsentStatus.UNKNOWN) return

        UnityPlayer.UnitySendMessage("TealiumAndroid", "HandleConsentUpdate", "")
    }
}

class RemoteCommandListener(id: String, description: String = id) : RemoteCommand(id, description) {
    public override fun onInvoke(response: Response) {
        try {
            val json = JSONObject(response.requestPayload.toFriendlyMap().toMap())
            UnityPlayer.UnitySendMessage(
                "TealiumAndroid",
                "HandleRemoteCommandResponse",
                json.toString()
            )
        } catch (jex: JSONException) {
            Logger.qa(BuildConfig.TAG, "${jex.message}")
        }
        response.send()
    }
}