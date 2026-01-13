# Building on Linux

### Install dependencies
> Important! This documentation was written on Ubuntu 24.04 LTS. When downloading packages, use your distro's package manager.

Install the following deps: `build-essential git pkg-config libcurl4-openssl-dev libssl-dev zlib1g-dev`

```
sudo apt install build-essential git pkg-config libcurl4-openssl-dev libssl-dev zlib1g-dev
```

Clone this repository and switch to the `linux-main` branch from the terminal or an IDE.

```
git clone https://github.com/Sillyfications/project-sillyfied-installer.git
```

Go to the repository directory and run the following command to build the executable.

```
./setupdirs.sh; ./source2obj.sh; ./obj2exec.sh
```
Your built executable is in `build/bin`.
