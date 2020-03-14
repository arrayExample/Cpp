/*
Kevin Lippincott
Power/exponent Function

~Input~
1
1
1

~Output~
True

~Input 2~
1
2
3

~Output 2~
False
*/


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//declare variables
double first, second, third;

//Function(s):
void firstFunction(double first, double second, double third);

int main()
{
	cout << "Enter three numbers: ";
	cin >> first >> second >> third;
	cout << endl;

	firstFunction(first, second, third);

	return 0;
}

void firstFunction(double first, double second, double third)
{
	if (pow(first,second) == third)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
}