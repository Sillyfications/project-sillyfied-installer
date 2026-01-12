# Building on Windows
### Cloning the Windows branch
Clone the branch with any terminal program.
```
git clone https://github.com/Sillyfications/project-sillyfied-installer.git
```
Open the .sln file on Visual Studio 2022/2026 and switch the branch to windows-main.
### Setting up VCPKG


Clone the VCPKG repository to the root of the solution.
```
git clone https://github.com/microsoft/vcpkg.git vcpkg
```
Run the bootstrap batch file.
```
cd vcpkg; ./bootstrap-vcpkg.bat
```
Download the [vcpkg.json](https://sillyfications.github.io/projsil/dev/vcpkg.json) file and place in the root folder and then intergrate VCPKG to VS

```
./vcpkg.exe integrate install
```
Install the dependencies.

```
./vcpkg.exe install
```
### Configure Solution
Back at VS, go to project properties and go to Configuration Manager -> vcpkg and enable "use VCPKG manifest".

Link both zlib and curl libraries by going to Linker -> General -> Additional library dependencies.
```
[path before root of repo]\projsil-installer-windows\vcpkg_installed\x64-windows\lib
```
Before building go to Linker -> Input -> Additional Dependencies. Remove the contents and paste this: `libcurl.lib;zlib.lib;%(AdditionalDependencies)`
### Build
Place both dlls files located on `[path before root of repo]\projsil-installer-windows\vcpkg_installed\x64-windows\lib` to `[path before root of repo]\projsil-installer-windows\x64\debug\`
and then build.



