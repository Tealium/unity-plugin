#!/bin/bash

# Build logs are outputed to '~/Library/Logs/Unity/Editor.log'

project_dir=${PWD}

/Applications/Unity/Hub/Editor/2020.3.6f1/Unity.app/Contents/MacOS/Unity \
    -projectPath "${PWD}" \
    -logFile \
    -exportPackage Assets/Tealium/Tealium.cs \
                   Assets/Tealium/TealiumAndroid.cs \
                   Assets/Tealium/TealiumiOS.cs \
                   Assets/Tealium/TealiumCommon.cs \
                   Assets/Tealium/Plugins/Newtonsoft.Json.dll \
                   Assets/Tealium/Plugins/TealiumUnityPlugin.asmdef \
                   Assets/Tealium/Plugins/Android/collectdispatcher-release.aar \
                   Assets/Tealium/Plugins/Android/lifecycle-release.aar \
                   Assets/Tealium/Plugins/Android/remotecommanddispatcher-release.aar \
                   Assets/Tealium/Plugins/Android/remotecommands-release.aar \
                   Assets/Tealium/Plugins/Android/tagmanagementdispatcher-release.aar \
                   Assets/Tealium/Plugins/Android/tealiumlibrary-release.aar \
                   Assets/Tealium/Plugins/Android/unity-release.aar \
                   Assets/Tealium/Plugins/Android/visitorservice-release.aar \
                   Assets/Tealium/Plugins/Android/mainTemplate.gradle \
                   Assets/Tealium/iOS/TealiumCollect.framework \
                   Assets/Tealium/iOS/TealiumCore.framework \
                   Assets/Tealium/iOS/TealiumLifecycle.framework \
                   Assets/Tealium/iOS/TealiumRemoteCommands.framework \
                   Assets/Tealium/iOS/TealiumTagManagement.framework \
                   Assets/Tealium/iOS/TealiumVisitorService.framework \
                   Assets/Tealium/iOS/TealiumUnityConstants.swift \
                   Assets/Tealium/iOS/TealiumUnityDelegateBridge.h \
                   Assets/Tealium/iOS/TealiumUnityPlugin-Bridging-Header.h\
                   Assets/Tealium/iOS/TealiumUnityPlugin.swift \
                   Assets/Tealium/iOS/TealiumUnityPluginBridge.mm \
                   Assets/Tealium/iOS/TealiumUnityPluginExtensions.swift 
    Tealium.unitypackage -nographics -batchmode -quit;