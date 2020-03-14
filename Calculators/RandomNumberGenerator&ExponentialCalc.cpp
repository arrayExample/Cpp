/*
Kevin Lippincott

Random Number Generator
+ Manipulate that Number

~ INPUT ~


~ Additional Notes ~
x + y function multiplies by 2? Many variations attempted.
*/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//Functions to be used:
int menu_fx1( int random_number);
int menu_fx2( int random_number);
int menu_fx3( int random_number);
int menu_fx4( int random_number);
int menu_fx5( int random_number);
int menu_fx6( int random_number);
int menu_fx7( int random_number);


//Program Start:
int main()
{
	int menu_selection;
	cout << "This program generates a random (2-digit) number and allows the user to \n continuously manipulate it with the given menu options:" << endl;
	//Initial generation of random number.
	srand(time(NULL));
	int random_number = rand() % ((99 - 10 + 1) + 10);
	int new_number;

	//Menu Selection using do-while
	do
	{
		//Menu List
		cout << "Your number is: " << random_number << endl;
		cout << "~ Menu ~" << endl;
		cout << "'Selection'" << "'Description'" << endl;
		cout << "     1     " << "Double the random number." << endl;
		cout << "     2     " << "Raise random number to the power of 2." << endl;
		cout << "     3     " << "Raise random number to the power of 3." << endl;
		cout << "     4     " << "Raise random number to the power of 4." << endl;
		cout << "     5     " << "Sum of random numbers digits (up to 99999)." << endl;
		cout << "     6     " << "Raise first digit to the power of the second digit (2-digit numbers)." << endl;
		cout << "     7     " << "Raise the first two digits to the power of the last digit (3-digit numbers)." << endl;
		cout << "     8     " << "stop program" << endl; //break option
		cin >> menu_selection;

		//Menu Options and call-to Functions
		switch (menu_selection)
		{
		case 1:
			new_number = menu_fx1(random_number);
			cout << random_number << " * 2 = " << new_number << endl;
			random_number = new_number;
			break;
		case 2:
			new_number = menu_fx1(random_number);
			cout << random_number << " ^ 2 = " << new_number << endl;
			random_number = new_number;
			break;
		case 3:
			new_number = menu_fx1(random_number);
			cout << random_number << " ^ 3 = " << new_number << endl;
			random_number = new_number;
			break;
		case 4:
			new_number = menu_fx1(random_number);
			cout << random_number << " ^ 4 = " << new_number << endl;
			random_number = new_number;
			break;
		case 5:
			new_number = menu_fx1(random_number);
			cout << "All the numbers digits added together: " << new_number << endl;
			random_number = new_number;
			break;
		case 6:
			new_number = menu_fx1(random_number);
			cout << new_number << endl;
			random_number = new_number;
			break;
		case 7:
			new_number = menu_fx1(random_number);
			cout << new_number << endl;
			random_number = new_number;
			break;
		case 8:
			cout << "Stopping program...\n";
			break;
		}
		random_number;
	} while (menu_selection != 8);
	{

	}
	return 0;
	//Program End
}
//Funtion(s) ( Mapped to user menu selection # (fx#) )
//x*2
int menu_fx1(int random_number)
{
	int new_number = random_number * 2;
	return new_number;
}
//x^2
int menu_fx2(int random_number)
{
	int new_number = pow(random_number, 2);
	return new_number;
}
//x^3
int menu_fx3(int random_number)
{
	int new_number = pow(random_number, 3);
	return new_number;
}
//x^4
int menu_fx4(int random_number)
{
	int new_number = pow(random_number, 4);
	return new_number;
}
//x+y 

int menu_fx5(int random_number)
{
	//  ~ 2nd attempt(s) , Issue: Multiplies by 2?
	int new_number = random_number;
	int total = 0;
	while (new_number > 0)
	{
		total += new_number % 10;
		new_number /= 10;
	}
	new_number = total;
	return new_number;
	/*  ~ 1st attempt(s) , Issue: Multiplies by 2?
	if (new_number >= 10 || new_number <= 99)
	{
		
		n1 = new_number % 10;
		n2 = ((new_number / 10) % 10);
		new_number = n1 + n2;
		return new_number;
	}
	
	else if (new_number >= 100 || new_number <= 999)
	{
		n1 = new_number % 10;
		n2 = ((new_number / 10) % 10);
		n3 = ((new_number / 10) % 100);
		new_number = n1 + n2 + n3;
		return new_number;
	}
	else if (new_number >= 1000 || new_number <= 9999)
	{
		n1 = new_number % 10;
		n2 = ((new_number / 10) % 10);
		n3 = ((new_number / 10) % 100);
		n4 = ((new_number / 10) % 1000);
		new_number = n1 + n2 + n3 + n4;
		return new_number;
	}
	else if (new_number >= 10000 || new_number <= 99999)
	{
		n1 = new_number % 10;
		n2 = ((new_number / 10) % 10);
		n3 = ((new_number / 10) % 100);
		n4 = ((new_number / 10) % 1000);
		n5 = ((new_number / 10) % 10000);
		new_number = n1 + n2 + n3 + n4 + n5;
		return new_number;
	}
	else
	{
		return random_number;
	}
	*/
}

int menu_fx6(int random_number)
{
	int n1, n2;
	if (random_number >= 10 || random_number <= 99)
	{
		n1 = random_number % 10;
		random_number = n1;
		n2 = random_number % 10;
		random_number = n1 ^ n2;
		return random_number;
	}
	else
	{
		return random_number;
	}
}

int menu_fx7(int random_number)
{
	int n1, n2, n3;
	if (random_number >= 100 || random_number <= 999)
	{
		n1 = random_number % 10;
		random_number = n1;
		n2 = random_number % 10;
		random_number = n2;
		n3 = random_number % 10;
		random_number = n2 ^ n3;
		return random_number;
	}
	else
	{
		return random_number;
	}
}
