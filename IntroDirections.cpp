//Allows me to print to screen.
#include <iostream>
//Includes header to this file.
#include "IntroDirections.h"
//Body of functions below main.
void IntroDirections::DisplayIntro()
{
	//Intro and basic game instructions.
	cout << "\t\t\t  WELCOME!!";
	cout << "\n\t\t\t     To";
	cout << "\n\t\t\tTERROR TOWN!!!   ";
	cout << "\nWhat started out as a fun outting to the circus with friends";
	cout << "\nhas rapidly gone south and now you and your friends are fighting";
	cout << "\nfor your lives. Choose your path by selecting 1 for yes or 2 for no when prompted.";
	cout << "\n\nEnjoy!!";
	return;
}

//Function for getting and storing players name.
string IntroDirections::GetUserName()
{
	cout << "\n\nWhat is your name? ";
	//Variable to hold player input.
	string userName;
	//Gets player input for next function.
	cin >> userName;
	//Returns the player name to main function for use in next function.
	return userName;
}

//Function for inserting userName into story opening.
void IntroDirections::WelcomeUser(string userName)
{
	//Story begins and sets up first story choice.
	cout << "\nWelcome " + userName + "\n";
	cout << "\nAre you ready to fight for your life? You better be, it's the only";
	cout << "\nchance you have to not die here tonight.\n";
	cout << "\nWhen you are ready ";
	system("pause");
	cout << "\nYou wake up in a dimly lit room. It smells of decay and mold. You have";
	cout << "\nno idea where your friends are or if they're even alive. You realize";
	cout << "\nthat you are tied to a chair and start looking for a way to get free.\n";
}