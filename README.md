Unity Mobile Plugin
===================

### Brief ###

This plugin provides the means to tag Unity3d applications for the purposes of leveraging [Tealium's tag management platform (Tealium IQ)](http://tealium.com/products/enterprise-tag-management/). 

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

* Unity 4.3+
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

The Tealium Plugin has a base AndroidManifest.xml which is a copy of Unity3d's AndroidManifest.xml but with the ```android.permission.ACCESS_NETWORK_STATE``` permission included. The [Advanced Guide](../../wiki/Advanced-Guide#deploying-to-an-android-project) has  detailed instructions on how to further modify this file. 

#### Use Proxy to verify (optional)

When deployed on an iOS or Android environment, you can use an HTTP proxy to confirm successful retrieval of configuration data from our multi-CDN and to confirm successful delivery of a tracking call. Several popular third-party options are:

- [Charles Proxy](http://www.charlesproxy.com)
- [Wireshark](http://www.wireshark.org)
- [HTTP Scoop](http://www.tuffcode.com)

Tealium's multi-CDN configuration address is *http://tags.tiqcdn.com*.  You may have to use the [disable HTTPS Config option](../../wiki/Tealium-API.Config#config-disablehttpsbool-disable) when you init the library to permit proxying.

If you have access to the Tealium Community site, detailed instructions on how to setup Charles Proxy on an iDevice can be found at: https://community.tealiumiq.com/posts/624994

Alternatively, you can use an analytic service with real-time reporting to confirm delivery of dispatches.  This verification method requires both an active analytics account (i.e. [Google Analytics](http://www.google.com/analytics/)) and an active [Tealium IQ](http://tealium.com) account to enable mapping.  If you have both of these, consult the Tealium community post at: https://community.tealiumiq.com/posts/568700


### Contact Us ###
Questions or comments?

- Post code questions in the [issues page.](../../issues)
- Email us at [mobile_support@tealium.com](mailto:mobile_support@tealium.com)
- Contact your Tealium account manager
