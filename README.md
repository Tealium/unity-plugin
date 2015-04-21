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

2a. Create a "Plugins" directory in your project's "Assets" directory, if not already present. 

2b. Copy the contents of the "Tealium" directory into the "Plugins" directory.

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

Additional frameworks are necessary to run the Tealium Plugin on iOS, the [Advanced Guide](../../wiki/Advanced-Guide#deploying-to-an-ios-project) has instructions on how to do this.

#### Android ####

The Tealium Plugin has a base AndroidManifest.xml which is a copy of Unity's AndroidManifest.xml with some additions. It will still be necessary to update the AndroidManifest to the project's Tealium *account-profile-environment*. If the final application will support devices < API 14, all activities will need to natively call ```Tealium.onResume(this)``` and ```Tealium.onPause(this)``` in their activity's onResume and onPause methods respectively. 

The [Advanced Guide](../../wiki/Advanced-Guide#deploying-to-an-android-project) has  detailed instructions on how to further modify this file. 

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
