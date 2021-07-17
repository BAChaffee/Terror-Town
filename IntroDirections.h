#pragma once
//Allows me to use strings.
#include <string>
//So I don't have to type std:: on every line.
using namespace std;

//Declare functions I will use within their class
class IntroDirections
{
public:
	//Calls Intro function.
	void DisplayIntro();
	//Variable created to hold player name.
	string GetUserName();
	//Calls the Welcome user function and inputs the userName. 
	void WelcomeUser(string userName);
private:
};