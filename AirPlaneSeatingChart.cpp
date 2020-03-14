/*
Kevin Lippincott
Plane / Assigned Seating Table

*/
#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

//Declare Constants
const int NUMBER_ROWS = 13;
const int NUMBER_COLS = 6;

//Functions to be used:
void initialize(char a[][NUMBER_COLS]);
void printArray(char a[][NUMBER_COLS], int NUMBER_ROWS);
void addFirstClass(char a[][6], int user_row, int user_col);
void addBusinessClass(char a[][6], int user_row, int user_col);
void addEconomyClass(char a[][6], int user_row, int user_col);

//Variable declarations
int menu_selection;
int row;
int col;
int user_row;
int user_col;
char a[13][6];

//Program Start:
int main()
{
	//Declare and Initialize array
	initialize(a);

	//Menu Selection using do-while
	do
	{
		//Menu List
		cout << "~ Menu ~" << endl;
		cout << "'Selection'" << "'Description'" << endl;
		cout << "     1     " << "View seating table." << endl;
		cout << "     2     " << "Add first class passenger. (Rows 1 - 2)" << endl;
		cout << "     3     " << "Add business class passenger. (Rows 3 - 7)" << endl;
		cout << "     4     " << "Add economy class passenger. (Rows 8 - 13)" << endl;
		cout << "     5     " << "stop program" << endl; //break option
		cin >> menu_selection;

		//Menu Options
		switch (menu_selection)
		{
		case 1:
			printArray(a, NUMBER_ROWS);
			break;
		case 2:
			cout << "Enter the row number (1 - 2): ";
			cin >> user_row;
			cout << "Enter the column number (1 - 6): ";
			cin >> user_col;
			cout << endl;
			addFirstClass(a, user_row-1, user_col-1);
			break;
		case 3:
			cout << "Enter the row number (3 - 7): ";
			cin >> user_row;
			cout << "Enter the column number (1 - 6): ";
			cin >> user_col;
			cout << endl;
			addBusinessClass(a, user_row - 1, user_col - 1);
			break;
		case 4:
			cout << "Enter the row number (8 - 13): ";
			cin >> user_row;
			cout << "Enter the column number (1 - 6): ";
			cin >> user_col;
			cout << endl;
			addEconomyClass(a, user_row - 1, user_col - 1);
			break;
		case 5:
			cout << "Stopping program...\n";
			break;
		}
	} while (menu_selection != 5);
	{

	}
	return 0;
}

//Funtion(s)
void initialize(char a[][6])
{
	for (int row = 0; row < 13; row++)
	{
		for (int col = 0; col < 6; col++)
		{
			a[row][col] = '*';
		}
	}
}


void printArray(char a[][6], int NUMBER_ROWS)
{
	cout << "Seats available marked as '*'" << endl;
	for (int row = 0; row <= 13; row++)
	{
		for (int col = 0; col < 6; col++)
		{
			cout << setw(6) << a[row][col] << " ";
		}
		cout << endl;
	}
}

void addFirstClass(char a[][6], int user_row, int user_col)
{
	if (user_row <= 1)
	{
		for (int row = 0; row < 1; row++)
		{
			for (int col = 0; col < 6; col++)
			{
				if (a[user_row][user_col] == '*')
				{
					a[user_row][user_col] = 'X';
				}
			}
		}
	}
	else
	{
		cout << "Rows 1 and 2 are reserved for first class" << endl;
	}
}

void addBusinessClass(char a[][6], int user_row, int user_col)
{
	if (user_row >= 3 && user_row <= 7)
	{
		for (int row = 0; row < 1; row++)
		{
			for (int col = 0; col < 6; col++)
			{
				if (a[user_row][user_col] == '*')
				{
					a[user_row][user_col] = 'X';
				}
			}
		}
	}
	else
	{
		cout << "Rows 3 - 7 are reserved for business class" << endl;
	}
}

void addEconomyClass(char a[][6], int user_row, int user_col)
{
	if (user_row >= 8 && user_row <= 13)
	{
		for (int row = 0; row < 1; row++)
		{
			for (int col = 0; col < 6; col++)
			{
				if (a[user_row][user_col] == '*')
				{
					a[user_row][user_col] = 'X';
				}
			}
		}
	}
	else
	{
		cout << "Rows 8 - 13 are reserved for economy class" << endl;
	}
}
