#pragma once
//So I don't have to type std:: on every line.
using namespace std;
//Allows me to use strings.
#include <string>
//Declare functions I will use within their class

class Scenarios
{
public:
	//Calls the First Scenario
	int PrisonerScenario(int& r_health);
	//Calls the Second Scenario
	int SurvivorScenario(int& r_ammo);
private:
};