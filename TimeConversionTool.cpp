/*  Kevin Lippincott
Time Converter


~ INPUT ~

1 <Enter>
0130 <Enter>

~ OUTPUT ~

Your converted time is: 1330
This program converts twelve hour time notation to twenty-four hour time notation.
~ Menu ~
'Selection''Description'
      1     12 hour notation to 24 hour notation
      2     24 hour notation to 12 hour notation
      3     stop program
*/


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Functions to be used:
int standard_military(int time_input);
int military_standard(int time_input);

//Program Start:
int main()
{
	int time_input;
	int menu_selection;

	//Menu Selection using do-while
	do
	{
		//Menu Selection List
		cout << "This program converts twelve hour time notation to twenty-four hour time notation." << endl;
		cout << "~ Menu ~" << endl;
		cout << "'Selection'" << "'Description'" << endl;
		cout << "     1     " << "12 hour notation to 24 hour notation" << endl;
		cout << "     2     " << "24 hour notation to 12 hour notation" << endl;
		cout << "     3     " << "stop program" << endl; //break option
		cin >> menu_selection;
		
		//Menu Options and call-to Functions
		switch (menu_selection)
		{
		case 1:
			cout << "The time must be in #### form and considered PM to be converted. ";
			cout << "Please enter a time that you wish to convert to 24 hour notation. ";
			cin >> time_input;
			cout << endl;
			cout << "Your converted time is: " << standard_military(time_input) << endl;
			break;
		case 2:
			cout << "The time must be in #### form.";
			cout << "Please enter a time (in #### form) that you wish to convert to 12 hour notation: ";
			cin >> time_input;
			cout << endl;
			if (time_input >= 1200)
			{
				cout << "Your converted time is: " << military_standard(time_input) << " PM." << endl;
			}
			else
			{
				cout << "Your converted time is: " << military_standard(time_input) << " AM." << endl;
			}
			break;
		case 3:
			cout << "Stopping program...\n";
			break;
		}
	} while (menu_selection != 3);
	{
		
	}
	return 0;
	//:Program End
}

//Funtion(s) for time conversion:

int standard_military(int time_input)
{
	int time_output;
	time_output = time_input + 1200;
	return time_output;
}

int military_standard(int time_input)
{
	int time_output;

	if (time_input >= 1200)
	{
		time_output = time_input - 1200;
	}
	else if (time_input < 1200)
	{
		time_output = time_input;
	}
	return time_output;
}
