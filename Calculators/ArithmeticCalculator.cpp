/*
Kevin Lippincott

Arithmetic Calculator

~ Instructions ~
Write a program, using case statements, that mimics a calculator.
The program should take as input two integers and the operation to be performed.
It should then output the numbers, the operator, and the result.
For division, if the denominator is zero, output an appropriate message.

Some sample outputs are as follow:

3 + 4 = 7
13  * 5 = 65
~ Input ~

~ Output ~
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int inputOne, inputTwo, total = 0;
	char operatorOne;

	cout << "First Integer:  ";
	cin >> inputOne;
	cout << "First Operator: ";
	cin >> operatorOne;
	cout << "Second Integer: ";
	cin >> inputTwo;
	cout << endl;

	if (operatorOne == '*')
	{ 
		total = inputOne * inputTwo;
		cout << inputOne << " " << operatorOne << " " << inputOne << " = " << total << endl;
	}
	else if (operatorOne == '/')
	{
		total = inputOne / inputTwo;
		cout << inputOne << " " << operatorOne << " " << inputOne << " = " << total << endl;
	}
	else if (operatorOne == '+')
	{
		total = inputOne + inputTwo;
		cout << inputOne << " " << operatorOne << " " << inputOne << " = " << total << endl;
	}
	else if (operatorOne == '-')
	{
		total = inputOne - inputTwo;
		cout << inputOne << " " << operatorOne << " " << inputOne << " = " << total << endl;
	}
}
