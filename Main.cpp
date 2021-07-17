//This allows me to do input and output
#include <iostream>
//Includes header to Player Info cpp file.
#include "PlayerInfo.h"
//Includes header to Scenarios cpp file.
#include "Scenarios.h"
//Includes header to Intro cpp file.
#include "IntroDirections.h"
//So I don't have to type std:: on every line.
using namespace std;
//Sets players starting ammo count.
int ammoCount = 0;
//Pointer for ammo
int* ptr_ammo = &ammoCount;
//Sets players starting health count.
int playerHealth = 100;
//Pointer for health
int* ptr_health = &playerHealth;

//Main program function
int main()
{
	//Object created to use Intro class
	IntroDirections objectIntroDirections;
	//Object created to use Scenarios class
	Scenarios objectScenarios;
	//Object created to use Player Info class
	PlayerInfo objectPlayerInfo;
	//Calling the function to display intro

	objectIntroDirections.DisplayIntro();
	//Game
	bool playAgain = false;
	//Start of game loop
	do
	{
		//Sets player ammo
		ammoCount = 0;
		//Sets player health
		playerHealth = 100;
		//Create local variable to hold user name
		string userName;
		//Assigns userName to GetUserName.
		userName = objectIntroDirections.GetUserName();
		//Welcome player and set up first choice.
		objectIntroDirections.WelcomeUser(userName);
		//Pause for players to read screen.
		cout << "\nWhen you are finished ";
		system("pause");
		//Displays players health for start of game.
		objectPlayerInfo.DisplayPlayerHealth();
		//Start Drive by scenario. Using a reference to get scenario outcome ammo count
		int localResultHealthCount = objectScenarios.PrisonerScenario(playerHealth);
		//Adds or subtracts the resultant outcome from beginning ammo count.
		*ptr_health = localResultHealthCount + playerHealth;
		//Displays health count after first scenario.
		objectPlayerInfo.DisplayPlayerHealth();
		//System pause for player to take everything in.
		cout << "\nWhen you are finished ";
		system("pause");
		//Adds or subtracts resultant outcome from beginning life total.
		//Using a reference to get scenario outcome player health.
		int localResultAmmoCount = objectScenarios.SurvivorScenario(ammoCount);
		*ptr_ammo = localResultAmmoCount + ammoCount;
		//Displays ammo count after second scenario. 
		objectPlayerInfo.DisplayPlayerAmmo();
		//Displays health count after second scenario.
		objectPlayerInfo.DisplayPlayerHealth();
		//System pause for player to take everything in.
		cout << "\nWhen you are finished ";
		system("pause");
		//Asking if player would like to play again.
		cout << "\n\nThat was a blast right? How about another go 'round? ";
		//String for player response.
		string playerChoice;
		//Get player answer.
		cin >> playerChoice;
		if (playerChoice == "1")
		{
			playAgain = true;
		}
		else if (playerChoice == "2")
		{
			playAgain = false;
		}
	} while (playAgain == true);

	//Ends program.
	return 0;
}