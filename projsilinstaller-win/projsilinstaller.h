using namespace std;
#pragma once

class ProjSilInstaller {
public:
	void AssignModPath();
	void MainMenu();
	
private:
	void PrintMenuText();
	void Install();
	void Update();
	void Repair();
	void Addons();
	void Path();
	void Uninstall();
	void Quit();

	string tempPath;
};

