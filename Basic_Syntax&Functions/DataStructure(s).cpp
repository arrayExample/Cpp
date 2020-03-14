/*
Kevin Lippincott
Data Structures demo

~ Input ~

Orange
orange
0
14
19

~ Output ~

~ Fruit data ~
Name: Orange
Color: orange
Fat (per serving): 0
Sugar (per serving): 14
Carbs (per serving): 19
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Struct
struct fruitType
{
	string fruitName;
	string fruitColor;
	int fat;
	int sugar;
	int carbs;
} newFruit;

//Main Program Start:
int main()
{
	cout << "Enter the name of the fruit: ";
	cin >> newFruit.fruitName;
	cout << "Enter the color of the fruit: ";
	cin >> newFruit.fruitColor;
	cout << "How many grams of fat per serving does " << newFruit.fruitName << " have? ";
	cin >> newFruit.fat;
	cout << "How many grams of sugar per serving does " << newFruit.fruitName << " have? ";
	cin >> newFruit.sugar;
	cout << "How many grams of carbs per serving does " << newFruit.fruitName << " have? ";
	cin >> newFruit.carbs;

	cout << "\n~ Fruit data ~" << endl;
	cout << "Name: " << newFruit.fruitName << endl;
	cout << "Color: " << newFruit.fruitColor << endl;
	cout << "Fat (per serving): " << newFruit.fat << endl;
	cout << "Sugar (per serving): " << newFruit.sugar << endl;
	cout << "Carbs (per serving): " << newFruit.carbs << endl;

	return 0;
}