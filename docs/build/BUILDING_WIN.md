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
Intergrate VCPKG

```
.\vcpkg.exe integrate install
```
### Configure Solution
Download the [vcpkg.json]() file and place in projsilinstaller-win.

