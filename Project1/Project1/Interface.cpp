/*
	Abou-Harb, Omar (team leader)
	Tran, Ashley

	CS A250
	Project (Part B)
*/

#include "Interface.h"


#include <iostream>
#include <string>


using namespace std;


// Definition function displayMenu
void displayMenu()
{
	cout << string(62, '*') << endl
		<< string(24, ' ') << "COOKIE RECIPES"
		<< endl << string(62, '*') << endl;

	cout << "Select one of the following:" << endl
		<< "    a.Print all recipes" << endl
		<< "    b.Print cookie recipe" << endl
		<< "    c.Print cookie calories" << endl
		<< "    d.Print limited calories" << endl
		<< "    e.To exit" << endl;
}

// Definition function processChoice
void processChoice(CookieList& cookieList)
{
	// Your code here...
}
