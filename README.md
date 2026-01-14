# project-sillyfied-installer
An installer for a Half-Life modification. Install, update, remove or add optional addons to the mod. It was an attempt to make a cross-platform application for both Windows and Linux written in C++.  To build the project see [BUILDING.MD](https://github.com/Sillyfications/project-sillyfied-installer/blob/main/docs/build/BUILDING.MD). 

## Requirements
Windows**: Windows 10* or 11, [7-zip](https://www.7-zip.org/) 

Linux**: 7-zip, but most major distros come with 7-zip preinstalled.

Both platforms: Steam and the Steam version of Half-Life 1. WON (World Opponent Network), Pre-Steampipe, cracked or Xash3D with or without FWGS is not supported! There are workarounds to still use this program without Half-Life 1, but it will not do much.

*Windows 10 users should run the program on PowerShell, MinGW, KDE Konsole or any other terminal program that is not CMD. CMD does not support the ANSI escape codes used in the installer. For Windows 11, it is fine.

**It would be possible to use this installer on an older operating system, but it is not tested.

## Downloads
For [Windows 10/11](https://github.com/Sillyfications/project-sillyfied-installer/releases/tag/Windows).

For [modern 64-bit Linux distributions]().


  

## Documentation
[Fast installation guide.](https://github.com/Sillyfications/project-sillyfied-installer/blob/main/docs/INSTALL.MD)

[Modifying the installer for your own (Gold)Source modifications.](https://github.com/Sillyfications/project-sillyfied-installer/blob/main/docs/MODIFY_INSTALLER.MD)

[How to publish your own addons.](https://github.com/Sillyfications/project-sillyfied-installer/blob/main/docs/YOUR_ADDON.MD)

[Using the installer without Half-Life](https://github.com/Sillyfications/project-sillyfied-installer/blob/main/docs/WITHOUT_HALFLIFE.MD)

[Host guide for your own (Gold)Source modifications.](https://github.com/Sillyfications/project-sillyfied-installer/blob/main/docs/MODIFY_WEBSITE.MD)

[Addon structure](https://github.com/Sillyfications/project-sillyfied-installer/blob/main/docs/ADDONS.MD)



## Used projects
[JSON for Modern C++](https://github.com/nlohmann/json) by Niels Lohmann - licensed under MIT

[curl](https://github.com/curl/curl) - licensed under an open-source MIT-like license
