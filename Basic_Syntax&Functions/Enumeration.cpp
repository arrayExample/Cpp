/*
Kevin Lippincott
Enum Demo
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Variables
string userInput;

//Enum creation (A)
enum birdType{PEACOCK, SPARROW, CANARY, PARROT, PENGUIN, OSTRICH, EAGLE, CARDINAL, HUMMINGBIRD};

int main()
{
	//(B)
	birdType BIRD;

	//(C)
	BIRD = CANARY;

	//(D)
	BIRD = birdType(BIRD + 1);

	//(E)
	BIRD = birdType(BIRD - 1);

	//(F)
	cout << BIRD << endl;

	//(G)
	cout << "\nEnter BIRD variable: ";
	cin >> userInput;
	cout << endl;
	birdType userInput;

	return 0;
}
