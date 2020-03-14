/*
Kevin Lippincott
fstream array

*/


#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int cars[10];
	//set ifstream
	ifstream inFile;

	//open file
	inFile.open("cars.dat");

	//map file elements to array
	for (int i = 0; !inFile.eof(); i++)
	{
		inFile >> cars[i];
	}

	//Array total
	int rando = 0;
	for (int i = 0; i < 10; i++)
	{
		rando += cars[i];
	}
	cout << "Total sold: " << rando << endl;

	//Highest in array
	for (int i = 0; i < 10; i++)
	{
		if (cars[i] > rando)
		{
			rando = cars[i];
		}
	}
	cout << "Who sold the most: " << rando << endl;

	return 0;
}