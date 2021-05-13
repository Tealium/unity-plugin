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
                   Assets/Plugins/Newtonsoft.Json.dll \
                   Assets/Plugins/TealiumUnityPlugin.asmdef \
                   Assets/Plugins/Android/collectdispatcher-release.aar \
                   Assets/Plugins/Android/lifecycle-release.aar \
                   Assets/Plugins/Android/remotecommanddispatcher-release.aar \
                   Assets/Plugins/Android/remotecommands-release.aar \
                   Assets/Plugins/Android/tagmanagementdispatcher-release.aar \
                   Assets/Plugins/Android/tealiumlibrary-release.aar \
                   Assets/Plugins/Android/unity-release.aar \
                   Assets/Plugins/Android/visitorservice-release.aar \
                   Assets/Plugins/Android/mainTemplate.gradle \
                   Assets/Plugins/iOS/TealiumCollect.framework \
                   Assets/Plugins/iOS/TealiumCore.framework \
                   Assets/Plugins/iOS/TealiumLifecycle.framework \
                   Assets/Plugins/iOS/TealiumRemoteCommands.framework \
                   Assets/Plugins/iOS/TealiumTagManagement.framework \
                   Assets/Plugins/iOS/TealiumVisitorService.framework \
                   Assets/Plugins/iOS/TealiumUnityConstants.swift \
                   Assets/Plugins/iOS/TealiumUnityDelegateBridge.h \
                   Assets/Plugins/iOS/TealiumUnityPlugin-Bridging-Header.h\
                   Assets/Plugins/iOS/TealiumUnityPlugin.swift \
                   Assets/Plugins/iOS/TealiumUnityPluginBridge.mm \
                   Assets/Plugins/iOS/TealiumUnityPluginExtensions.swift \
    Tealium.unitypackage -nographics -batchmode -quit;