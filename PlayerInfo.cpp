//Allows me to print to screen.
#include <iostream>
//Includes header file to this cpp file.
#include "PlayerInfo.h"

//Function to display player health.
void PlayerInfo::DisplayPlayerHealth()
{
	cout << "\nHealth: " << playerHealth << endl;
	return;
}

//Function to display player ammo.
void PlayerInfo::DisplayPlayerAmmo()
{
	cout << "\nBullets: " << ammoCount << endl;
	return;
}