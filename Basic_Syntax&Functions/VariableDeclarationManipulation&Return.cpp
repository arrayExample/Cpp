/*  Kevin Lippincott
	Additional Notes:
	Using VS17 IDE
	MyFirstProgram/Properties/System/SubSystem: 'Console (/SUBSYSTEM:CONSOLE)' added. Sticks console display.
*/


//include statement(s)
#include <iostream>

//using namespace statement
using namespace std;

int main()
{
	//variable declaration
	int num1;
	int num2;
	int num3;
	int average;

	//executable statements
	num1 = 125;
	num2 = 28;
	num3 = -25;
	average = ((num1 + num2 + num3) / 3);

	//return statement
	cout << "Data displayed as: Value (variableId)" << endl;
	cout << "Number 1: " << num1 << " (num1)" << endl;
	cout << "Number 2: " << num2 << " (num2)" << endl;
	cout << "Number 3: " << num3 << " (num3)" << endl;
	cout << "Average: " << average << " (average)" << endl;
	return 0;                                 
}