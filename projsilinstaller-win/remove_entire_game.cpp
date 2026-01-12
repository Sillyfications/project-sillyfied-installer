#include "remove_enitre_game.h"
#include <iostream>
//isnt really supported on C++ 14
//#include <filesystem> // Add this include
using namespace std;

void RemoveGame::Remove(string gamePath) {
	//just call the command line for each os
#ifdef _WIN64
	string command = "rmdir /S \"" + gamePath + "\\projsil\"";
	system(command.c_str());

#else // linux terminal command
	string command = "rm -rf '" + gamePath + "/projsil'";
	system(command.c_str());

#endif
	cout << "Removed the game files.";
}

bool RemoveGame::Confirmation() {
	char choice;
	string temp;
	cin >> temp;
	choice = temp[0];
	if (choice == 'y' || choice == 'Y') {
		return true;
	}
	else {
		return false;
	}
}