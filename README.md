Unity Mobile Plugin
===================

### Brief ###

This plugin provides the means to tag Unity applications for the purposes of leveraging [Tealium's tag management platform (Tealium IQ)](http://tealium.com/products/enterprise-tag-management/). 

Tealium's [mobile solution](http://tealium.com/products/enterprise-tag-management/mobile/) permits an app to add, remove or edit analytic services remotely, in real-time, without requiring a code rebuild or new release to take effect.

### Table of Contents ###

- [Requirements](#requirements)
- [Quick Start](#quick-start)
    - [1. Clone/Copy Library](#1-clonecopy-library)
    - [2. Add to Project](#2-add-to-project)
    - [3. Run](#3-run)
- [What next](#what-next)
- [Contact Us](#contact-us)

### Requirements ###

* Unity 4.5+
* iOS and/or Android Target
 * NOTE: For alternative platforms, the plugin mocks functionality and will still not throw Exceptions. 
 
### Quick Start ###

This guide presumes you have already created a [Unity app using it's development studio](http://unity3d.com/learn/tutorials/modules). Follow the below steps to add Tealium's Plugin to it.  

####1. Clone/Copy Library####
onto your dev machine by clicking on the *Clone to Desktop* or *Download ZIP* buttons on the main repo page.

![](../../wiki/images/generic_githubclone.png)

####2. Add To Project 

2a. Create an empty "Plugins" directory or copy the repo's "Plugins" in your project's "Assets" directory. 

2b. If you created an empty "Plugins" directory, copy the contents of the "Plugins" directory into your projects "Plugins" directory.

![](../../wiki/images/copy.png)

2c. Depending which language you are using, copy one of the following into your "Assets" directory.

* JavaScript: TealiumInitializer.js
* C#: TealiumInitializer.cs

2d. Create an empty Game Object and attach the TealiumInitializer script to it. 
> Game Object &gt; Create Empty

2e. Set the TealiumInitializer script to run first (to initialize the plugin).
> Edit &gt; Project Settings &gt; Script Execution Order

####3. Run
Your app is now ready to run. The module will mock tracking behavior in the Unity Editor, but when deployed to an iOS or Android environment, track calls will be sent out. 

Congratulations! You have successfully implemented the Tealium Plugin into your project. The following should be visible in the console: 

![](../../wiki/images/logs.png)

### What Next ###

#### iOS

The exported iOS Xcode project requires the ```-ObjC``` linker flag to be added to your project's ```Build Settings``` under the subsection ```Other Linker Flags```. 

For Unity 5.x and above we have provided a build post processor class you can copy from the ```Editor``` directory into your project's ```Assets/Editor``` directory.  

Either of the above solutions will result in a functioning Tealium library.  However the default instance will need to be changed to your desire Tealium Account/Profile/Environment.  You can edit these valuus at the top of the ```Plugins/iOS/TealiumBridge.mm``` file:

```objective-c
#define TEALIUM_ACCOUNT_NAME     @"tealiummobile"
#define TEALIUM_PROFILE_NAME     @"demo"
#define TEALIUM_ENVIRONMENT_NAME @"dev"
```

For more information please see the [Advanced Guide](../../wiki/Advanced-Guide#deploying-to-an-ios-project).

#### Android ####

The plugin will run without any complications out of the box with default configuration. However; it is necessary to update the project's Tealium *account-profile-environment* and can be done so in the plugin's custom AndroidManifest.xml file. 

The [Advanced Guide](../../wiki/Advanced-Guide#deploying-to-an-android-project) has  detailed instructions on the Android implementation. 

#### Dispatch Verification
The two recommended methods for dispatch verification are:

- AudienceStream Live Events
- Vendor Dashboard

AudienceStream live events provides real time visualization of dispatched data if the Tealium DataCloud Tag has been added the same TIQ account-profile used to init the library:

![](../../wiki/images/EventStore.png)

An analytic vendor with real time processing, such as [Google Analytics](http://www.google.com/analytics/)), can also be used to verify dispatches if the data sources have been properly mapped to the target vendors' variables. 

Note: vendors without real-time processing may take up to several hours to update their reporting.

### Contact Us ###
Questions or comments?

- Post code questions in the [issues page.](../../issues)
- Contact your Tealium account manager


--------------------------------------------

Copyright (C) 2012-2015, Tealium Inc.
