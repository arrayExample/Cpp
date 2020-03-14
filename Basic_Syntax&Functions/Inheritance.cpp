/*
Kevin Lippincott
Inheritance
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Functions to be used:
void input(void);
void output(void);
void inputTwo(tourType &);

//Variable 'destination' of tourType (used in functions)
tourType destination;

struct timeType
{
	int hr;
	double min;
	int sec;
};

struct tourType
{
	string cityName;
	int distance;
	timeType travelTime;
};

int main()
{

	input();
	inputTwo(destination);
	output();

	return 0;
}

//Functions start
void input(void)
{
	cout << "Welcome";
	cout << "City: ";
	cin >> destination.cityName;
	cout << "Distance (mi): ";
	cin >> destination.distance;
	cout << "Travel Time (hr, min, sec): ";
	cin >> destination.travelTime.hr >> destination.travelTime.min >> destination.travelTime.sec;
	cout << endl;
}

void output(void)
{
	cout << destination.cityName << " " << destination.distance << " " << destination.travelTime.hr << destination.travelTime.min << destination.travelTime.sec << endl;
}

void inputTwo(tourType & destination)
{
	cout << "Welcome";
	cout << "City: ";
	cin >> destination.cityName;
	cout << "Distance (mi): ";
	cin >> destination.distance;
	cout << "Travel Time (hr, min, sec): ";
	cin >> destination.travelTime.hr >> destination.travelTime.min >> destination.travelTime.sec;
	cout << endl;
}
