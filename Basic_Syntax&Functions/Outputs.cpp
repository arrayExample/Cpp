/*
Kevin Lippincott

Output Demo

~ Instructions ~
Write a program that uses while loops to perform the following steps:

Prompt the user to input two integers: firstNum and secondNum (firstNum must be less than secondNum).
Output all odd numbers between firstNum and secondNum.
Output the sum of all even numbers between firstNum and secondNum.
Output the numbers and their squares between 1 and 10.
Output the sum of the square of the odd numbers between firstNum and secondNum.
Output all uppercase letters.

~ Input ~

~ Output ~
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int firstNum, secondNum, oddNum, evenNum, total;

	cout << "First (smaller) Number: " << endl;
	cin >> firstNum;
	cout << "Second (larger) Number; " << endl;
	cin >> secondNum;

	int value = secondNum - firstNum;

	while (value > firstNum)
	{
		
		value = secondNum--;
		if (value % 2 == 0)
		{
			evenNum = value;
		}
		else
		{
			oddNum = value;
			cout << oddNum << endl;
		}
	}
	cout << "Are those your numbers?" << endl;
	return 0;
}