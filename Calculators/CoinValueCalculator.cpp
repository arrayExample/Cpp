/*
Kevin Lippincott

Coin Value Calculator

~ Instructions ~
Write a program that prompts the user to input a number of quarters, dimes, and nickels.
The program then outputs the total value of the coins in pennies.

~ Input ~
Number of Quarters? 4
Dimes? 10
Nickels? 20

~ Output ~
The total is: 300 pennies.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int total, quarters, dimes, nickels = 0;
	int costQuarter = 25;
	int costDime = 10;
	int costNickel = 5;
	cout << "Number of Quarters? ";
	cin >> quarters;
	cout << "Dimes? ";
	cin >> dimes;
	cout << "Nickels? ";
	cin >> nickels;
	cout << endl;

	total = ((quarters * costQuarter) + (dimes * costDime) + (nickels * costNickel));
	cout << "The total is: " << total << " pennies."<< endl;
}