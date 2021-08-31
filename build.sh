#!/bin/bash

# Build logs are outputed to '~/Library/Logs/Unity/Editor.log'

# Package management done via unity-jar-resolver.
# To update, download the latest version of it from the link below
# e.g. external-dependency-manager-X.X.XXX.unitypackage
# and then import into the project using the commented code below.
# https://github.com/googlesamples/unity-jar-resolver
#
# Unity -gvh_disable \
#       -batchmode \
#       -importPackage external-dependency-manager-1.2.166.unitypackage \
#       -projectPath . \
#       -quit

project_dir=${PWD}

Unity \
    -projectPath "${PWD}" \
    -logFile \
    -exportPackage Assets/Tealium \
                   Assets/Plugins \
                   Assets/Scripts/Editor \
                   Assets/ExternalDependencyManager \
    Tealium.unitypackage -nographics -batchmode -quit;