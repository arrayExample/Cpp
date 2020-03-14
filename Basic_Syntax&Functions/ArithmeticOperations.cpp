/*
Kevin Lippincott
Math Operations

~   Input  /  Output  ~
a) -23   8 /   3.94
b)  12  32 /   6.67
c)  15   0 /  15.00
d)   0 -36 / -35.00
e)   0   0 /   0
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int num1;
	int num2;
	cout << fixed << showpoint << setprecision(2);

	cout << "Enter two integers: ";
	cin >> num1 >> num2;
	cout << endl;

	if (num1 != 0 && num2 !=0)
	{
		cout << sqrt(abs(num1 + num2) + .5) << endl;
	}
	else if (num1 != 0)
	{
		cout << floor(num1 + .5) << endl;
	}
	else if (num2 != 0)
	{
		cout << ceil(num2 + .5) << endl;
	}
	else
	{
		cout << 0 << endl;
	}

	return 0;
}