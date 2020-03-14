/*
Kevin Lippincott

Sum of odds and evens Calc

~ Instructions ~
Write a program that reads a set of integers and then finds and prints the sum of the even and odd integers.

~ Input ~

~ Output ~
*/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//Declare file streams and variables.
	ifstream inFile;
	ofstream outFile;
	int number, evenNumber, oddNumber;

	//Open files.
	inFile.open("fileName.txt");
	outFile.open("newFile.txt", ios::app);

	//Map data to variable(s).
	while (inFile >> number)
	{
		if (number % 2 == 0)
		{
			evenNumber = number;
		}
		else if (number % 2 != 0)
		{
			oddNumber = number;
		}
	}

	//Populate newFile with data.
	outFile << evenNumber << oddNumber << endl;

	//Close files.
	inFile.close();
	outFile.close();

	return 0;
}