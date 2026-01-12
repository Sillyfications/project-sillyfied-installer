# Building on Windows
### Cloning the Windows branch
Clone the branch with any terminal program.
```
git clone https://github.com/Sillyfications/project-sillyfied-installer.git
```
Open the .sln file on Visual Studio 2022/2026 and switch the branch to windows-main.
### Setting up VCPKG
> If you already have VCPKG set up and has integrated to VS, you can skip this part.

Clone the VCPKG repository to the root of the solution.
```
git clone https://github.com/microsoft/vcpkg.git vcpkg
```
Run the bootstrap batch file.
```
cd vcpkg; ./bootstrap-vcpkg.bat
```
Intergrate VCPKG to VS

```
.\vcpkg.exe integrate install
```
### Configure Solution
Download the [vcpkg.json]() file and place in projsilinstaller-win folder and then download the dependendies in the same folder.
```
vcpkg install
```
Back at VS, go to project properties and go to the VCPKG tab. Enable manifest mode.

Link both zlib and curl libraries by going to Linker -> Input -> Additional dependencies. If you already had VCPKG installed, your path will be different than provided here.

And then build



