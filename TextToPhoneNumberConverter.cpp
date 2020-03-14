/*  Kevin Lippincott

Text to Phone Number

~ INPUT ~
CALLNOW

~ OUTPUT ~
3
2
6
6
6
7
9

Additional Notes (using VS 2017):
WeekTwo/Linker/Properties/System/SubSystem: 'Console (/SUBSYSTEM:CONSOLE)' added. Sticks console display.
*/


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string input;
	int counter, num, digit;

	cout << "Enter phone number (in text, 7 characters ONLY): ";
	cin >> input;
	cout << endl;

	for (int i = 0; i <= 7; i++)
	{
		num = (static_cast<int>(input[i]) - static_cast<int>('A'))-31;
		if (0 <= num && num < 26 )
		{
			digit = (num / 3) + 2;
			if (((num / 3 == 6) || (num / 3 == 7)) && (num % 3 == 0))
				digit = digit - 1;
			if (digit > 9)
				digit = 9;
			cout << digit << endl;
		}
	}
	return 0;
}
