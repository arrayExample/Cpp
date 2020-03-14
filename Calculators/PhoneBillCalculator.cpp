/*  Kevin Lippincott
Cellular Bill

 ~ OUTPUT ~
 Account Number: 971324
 Service Code: r
 Minutes Used: 1000
 Amount Due: 200

Additional Notes:
Using vs17 as ide
WeekTwo/Linker/Properties/System/SubSystem: 'Console (/SUBSYSTEM:CONSOLE)' added. Sticks console display.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Variables.
	double accountNumber, minutesUsed;
	char serviceCode;

	//Retrieve data and store in variables.
	cout << "Enter the account number: ";
	cin >> accountNumber;
	cout << endl;
	cout << "Enter the service code (p or r): ";
	cin >> serviceCode;
	cout << endl;
	cout << "Enter the number of minutes used: ";
	cin >> minutesUsed;
	cout << endl;

	//First Conditon
	if (serviceCode == 'R' || serviceCode == 'r')
	{
		//Create local variables and make calculations.
		double amountDue = 0;
		amountDue = (((minutesUsed - 50) *.20) + 10.00);

		//Output.
		cout << endl;
		cout << "Account Number: " << accountNumber << endl;
		cout << "Service Code: " << serviceCode << endl;
		cout << "Minutes Used: " << minutesUsed << endl;
		cout << "Amount Due: " << amountDue << setprecision(2) << endl;
	}
	//Second Condition
	else if (serviceCode == 'P' || serviceCode == 'p')
	{
		//Create local variables.
		double dayMinutes, nightMinutes, amountDue, dayCharges, nightCharges;

		//Retrieve data and store in local variables.
		cout << "Enter the minutes used during the day: (6:00 a.m. to 6:00 p.m.): ";
		cin >> dayMinutes;
		cout << endl;
		cout << "Enter the minutes used during the day: (6:00 p.m. to 6:00 a.m.): ";
		cin >> nightMinutes;
		cout << endl;

		//Calculations.
		dayCharges = ((dayMinutes - 75) * .10);
		nightCharges = ((nightMinutes - 100) * .05);
		amountDue = dayCharges + nightCharges + 25.00;

		//Output.
		cout << endl;
		cout << "Account Number: " << accountNumber << endl;
		cout << "Service Code: " << serviceCode << endl;
		cout << "Minutes Used: " << minutesUsed << endl;
		cout << "Amount Due: " << amountDue << setprecision(2) << endl;

	}
	//Error message (Conditon 1 and 2 failed).
	else
	{
		//Output.
		cout << "Enter a valid service code. P / R: ";
	}
	return 0;
}
