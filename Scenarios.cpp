//Allows me to print to screen.
#include <iostream>
//Includes the header to this file.
#include "Scenarios.h"
//First choice player is presented with.
int Scenarios::PrisonerScenario(int& r_health)
{
	//Sets ammo count to zero for scenario to be changed to whatever player finds and returned to the main function.
	int ResultHealthCount = 0;
	//Scenario Choice.
	cout << "\nYou see a staircase across the room leading down to another room. You begin";
	cout << "\nto hop over to the stairs. Once there, you look down, it's a long flight of";
	cout << "\nstairs. You look around the room for some way to get free of the chair but there";
	cout << "\nis nothing.";
	cout << "\n\nDo you take the plummet in hopes of breaking the chair to get free? 1 or 2? ";
	//Variable to hold player choice.
	int localPlayerChoice;
	//Gets player choice for story options.
	cin >> localPlayerChoice;
	//First outcome based on player input.
	switch (localPlayerChoice)
	{
	//Choice 1.
	case 1:
		cout << "\nYou start rocking, getting closer and closer to the tipping point. Here it comes,";
		cout << "\nthere's no turning back now. You close your eyes and over you go. You hit your hit on";
		cout << "\nthe first tumble. You hear the chair crack as it hits the stairs. You slide the";
		cout << "\nrest of the way down but the chair breaks apart at the bottom. You took a good hit to";
		cout << "\nthe side of the head and lost 20 life, but at least you're free. You get up and head to";
		cout << "\nthe door.\n\n";
		//Player found a box of ammo, this will get returned to the main function.
		ResultHealthCount = -20;
		break;
		//Second outcome based on player input.
		//Choice 2.
	case 2:

		cout << "\nYou can't do it. You hop away from the stairs and continue to scan the room. You spot a";
		cout << "\nbroken bottle on the ground and decide to use it to cut yourself free. You rock yourself";
		cout << "\nover next to the bottle, grab the broken glass, and cut the ropes, get up, and head down";
		cout << "\nthe stairs to the door.\n";
		ResultHealthCount = 0;
		break;
	}
	return ResultHealthCount;
}

//End of game cliff hanger.
int Scenarios::SurvivorScenario(int& r_ammo)
{
	//Sets health to zero for scenario. Any changes will be returned to the main function to be added or reduced from starting health.
	int ResultAmmoCount = 0;
	//Scenario
	cout << "\nYou look out the window and see some strange looking people, people that don't look friendly.";
	cout << "\nYou see them talking amongst each other, they don't know you've escaped. You have to time your";
	cout << "\nmove. As you look around, you see out the back door that there is a boat by the river, the guard";
	cout << "\npasses by every minute or so. There is a truck right outside the door, it's louder, but it's right";
	cout << "\nhere and the guards have their backs turned.\n";
	cout << "\nDo you take the truck? 1 or 2? ";
	//Variable to hold player choice
	int localPlayerChoice;
	//Gets player choice for story options.
	cin >> localPlayerChoice;
	//First outcome based on player choice.
	switch (localPlayerChoice)
	{
		//Choice 1.
	case 1:
		cout << "\nYou slowly open the door and move to the truck, it's unlocked. You climb up into the cab and find";
		cout << "\nkeys in the visor. You start the truck, alerting everyone to your presence. You put the truck in gear";
		cout << "\nand start driving right at the guards...\n";
		cout << "\nCheck out the phase two release of Terror Town to see what happens next.\n";
		//Resultant ammo outcome variable.
		ResultAmmoCount = 0;
		break;
	
	//Second outcome based on player choice.
	//Choice 2.
	case 2:
	
		cout << "\nYou slowly open the door, keep low, and head to the back of the building towards the door. Once you're";
		cout << "\noutside, there's only one guard to worry about. As you get closer to the door, you hear a voice right";
		cout << "\noutside, it's a guard, it sounds like he's on the phone. You peek around the corner and see the guards";
		cout << "\nrifle leaning up against the building in front of you. You slowly reach out and grab the rifle. This is";
		cout << "\nit, it's time to make your move...\n\n";
		cout << "\nCheck out the phase two release of Terror Town to see what happens next.\n";
		//Resultant ammo outcome variable.
		ResultAmmoCount = 30;
		break;
	}
	return ResultAmmoCount;
}