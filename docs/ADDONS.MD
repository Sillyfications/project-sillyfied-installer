# Addon stucture

For this documentation, we are going to use the TF2 hitsound addon as an example.

## Tree

```
projsil (tf2-killsound.7z when compressed)
│   readme.txt
│   Team Fortress 2 hit- and killsound.SILADDONVER
│
└───sound
        hitsound.wav
        killsound.wav
```

### readme.txt
This is the readme file for the mod, normally every addon should have a different readme name. Because this is the first addon, it should be fine being called readme.txt

Example: Full-Life_3.txt
```
Full-Life 3 by Faucet Software for ProjSil 51. //name of mod, by who and what version of the mod

Files for the Full-Life 3 campaign, currently not bootable right now, but tomorrow. //description

Credits: web://faucet.software/fl3/devs
Dependencies: Stream 2 engine plugin
Conflicts with the following addons: Full-Life 1, Full-Life 2, Full-Life 2 Episode 1, Full-Life 2 Episode 2
License: do-not-redist
```

### modname.SILADDONVER
This is the file used for comparing versions. Contains the mod version number

### sound or other files
This is just the addon files itself.


