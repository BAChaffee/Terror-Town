#pragma once 
//So I don't have to type std:: on every line.
using namespace std;
//External reference to main for variable use.
extern int playerHealth;
//External reference to main for variable use.
extern int ammoCount;
//Declare functions I will use within their class
class PlayerInfo
{
public:
	//Calls to display players health on screen
	void DisplayPlayerHealth();
	//Calls to display players ammo on screen.
	void DisplayPlayerAmmo();
private:
};