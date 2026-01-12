#include "update_package.h"
#include <iostream>
#include <fstream>


bool UpdatePackage::Compare(string tempPath, string gamePath) {
	gamePath += "\\projsil\\version.projsil"; //append the file name
	cout << "Checking for new versions...\n";
	//read both files and convert string to int
	ifstream tf(tempPath);
	ifstream gf(gamePath);
	int tempVersion, gameVersion = 0;
	tf >> tempVersion;
	gf >> gameVersion;
	//compare, highest is newest
	if (tempVersion > gameVersion) {
		cout << "Updating mod from " << gameVersion << " to " << tempVersion << ". Starting download...\n";
		return false; //needs update
	}
	else {
		cout << "Mod is already on the latest version. Returning... (you have: " << gameVersion << " - recent version is: " << tempVersion << ".\n";
		return true; //no update needed
	}






}

int UpdatePackage::GetLatestVersion(string _path) {
	ifstream tf(_path);
	int tempVersion = 0;
	tf >> tempVersion;
	return tempVersion;
}