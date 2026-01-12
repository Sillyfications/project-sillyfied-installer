#include <conio.h>
#include <Windows.h>
#include <shlwapi.h>
#include <string>
#include "check_steam_windows.h"
#include <iostream>
#include <algorithm>



/// <summary>
/// purpose: checks for if the device has steam installed, if this program is modified to seek another game than half-life, do not change this method.
/// arguments: none
/// returns: bool if steam is installed
/// assignments: steam directory to string steamDirPathWin
/// </summary>
bool CheckSteamWindows::SteamDirectoryExists() {

	const char* directory = "C:/Program Files (x86)/Steam"; //define the default steam directory
	struct stat sb; //stat does things with files and such

	if (stat(directory, &sb) == 0) { //does the directory exist?
		steamDirPathWin = directory; //store the directory
		return true;
	}
	else {
		return false; //prompt user to install steam or manually specify the path
	}
}

/// <summary>
/// purpose: checks for if the device has half-life installed, change the path to any game.
/// arguments: none
/// returns: bool if half-life is installed
/// assignments: half-life directory to string halflifeDirPathWin
/// </summary>
bool CheckSteamWindows::HalfLifeDirectoryExists() {

	const string hlDirectory = steamDirPathWin + "/steamapps/common/Half-Life"; //change game path here for different a different game
	struct stat sb;
	const char* path = hlDirectory.c_str(); //cannot compare string with char, convert the string to char 

	if (stat(path, &sb) == 0) { //does the HL directory exist?
		halflifeDirPathWin = path;
		return true;
	}
	else { //it isnt installed
		return false;
	}
}

/// <summary>
/// purpose: returns steam path
/// arguments: none
/// returns: string steamDirPathWin
/// assignments: none
/// </summary>
string CheckSteamWindows::GetSteamDirectory() { return steamDirPathWin; }

/// <summary>
/// purpose: returns half-life path
/// arguments: none
/// returns: string halflifeDirPathWin
/// assignments: none
/// </summary>
string CheckSteamWindows::GetHalfLifeDirectory() { return halflifeDirPathWin; }

/// <summary>
/// purpose: allow the user to set the path manually if the auto detection fails
/// arguments: none
/// returns: none
/// assignments: user defined path to SteamDirPathWin
/// </summary>
void CheckSteamWindows::UserPathInput() {
	//clear screen
	system("cls"); //C++ windows equivalent of Console.Clear() THIS ONLY WORKS FOR WINDOWS FIND A WORKAROUND FOR LINUX
	//ask user to input full path
	cout << "Input full path to the Steam folder:\n";
	string data;
	cin >> data;
	// C:\Program Files (x86)\Steam
	//switch backslashes
	std::replace(data.begin(), data.end(), '\\', '/');
	//do convertions and
	//store data to steamDirPathWin
	steamDirPathWin = data.c_str();
}

/// <summary>
/// purpose: allow the user to set the path manually if the auto detection fails for Half-Life
/// arguments: none
/// returns: none
/// assignments: user defined path to halflifedirpathwin
/// 
/// </summary>
void CheckSteamWindows::UserPathHalfLifeInput() {
	//clear screen
	system("cls"); //C++ windows equivalent of Console.Clear()
	//ask user to input full path
	cout << "Input full path to the folder where hl.exe is contained:";
	string data;
	cin >> data;
	// C:\Program Files (x86)\Steam
	//switch backslashes
	std::replace(data.begin(), data.end(), '\\', '/');
	//do convertions and
	//store data to steamDirPathWin
	halflifeDirPathWin = data.c_str();


}

/// <summary>
/// purpose: sets the mod path on where to install the files
/// returns: full mod path 
/// </summary>
string CheckSteamWindows::ReturnFullModPath() {
	//string send = halflifeDirPathWin + "/projsil";
	return halflifeDirPathWin;
}