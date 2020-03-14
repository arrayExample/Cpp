/*  Kevin Lippincott
Using VS 17 as ide,
Additional Notes:
WeekTwo/Linker/Properties/System/SubSystem: 'Console (/SUBSYSTEM:CONSOLE)' added. Sticks console display.
*/


//include statement(s)
#include <iostream>
#include <fstream>
#include <string>

//using namespace statement
using namespace std;

int main()
{
	
	//Declare file streams and variables 
	ifstream inFile;
	ofstream outFile;
	string firstName, lastName, department;
	double monthlySalary, monthlyBonus, distTraveled, timeTraveled, cupsSold, cupCost, taxes, bonus, afterBonus, afterTaxes, avgSpeed;

	// Open files.
	inFile.open("inData.txt");
	outFile.open("outData.txt", ios::app);

	//Map data inFile to variables.
	inFile >> firstName >> lastName >> department >> monthlySalary >> monthlyBonus >> distTraveled >> timeTraveled >> cupsSold >> cupCost;

	//Declare variables/EXECUTABLES missing in 'inFile' and needed for 'outFile' 
	taxes = 30.00;
	bonus = 5.00;
	afterBonus = monthlySalary + ((bonus / 100) * monthlySalary);
	afterTaxes = afterBonus - ((taxes / 100) * monthlySalary);
	avgSpeed = 50.00;

	//missing data: Taxes, Paycheck, Average Speed
	//Use variables to change/correct text document outFile.
	outFile << "Name: " << firstName << " " << lastName << ", Department: " << department << endl;
	outFile << "Monthly Gross Salary: " << monthlySalary << ", Monthly Bonus: " << monthlyBonus << endl;
	outFile << "Taxes: " << taxes << "%" << endl;
	outFile << "Paycheck: " << afterTaxes << endl;
	outFile << endl;
	outFile << "Distance Traveled: " << distTraveled << ", Traveling Time: " << timeTraveled << " hours" << endl;
	outFile << "Average Speed: " << avgSpeed << " miles per hour" << endl;
	outFile << "Number of Coffee Cups Sold: " << cupCost << ", Cost: " << cupCost << " per cup" << endl;
	outFile << "Sales Amount = " << cupCost * cupCost << endl;

	//Close files.
	inFile.close();
	outFile.close();

	return 0;
}
/*
Name: Giselle Robinson Department: Accounting

 Monthly Gross Salary: $ 5600.00Monthly Bonus: 5.00Taxes: 30.00

 Paycheck: $4116.00

 Distance Travelled: 450Traveling Time: 9

 Average Speed: 50.00miles per hour

 Number of Coffee Cups Sold: 75Cost: 1.50

 Sales Amount = $ 112.50


See below

 ifstream inFile;

    ofstream outFile;

    

    string firstName, lastName, dept;

    float gross, bonus, tax;

    int distance, time;

    int count;

    float cost, pay, speed, salesAmount;

	


	pay = gross + ((gross * bonus) / 100);

	pay = pay - (pay * 30) / 100;

    

    inFile.open("inData.txt");

    outFile.open("outData.txt");

    outFile << fixed << showpoint;

    outFile << setprecision(2);

    

    inFile >> firstName >> lastName >> dept;

    inFile >> gross >> bonus >> tax;

    inFile >> distance >> time;

    inFile >> count >> cost;

    

    //Calculate the pay

    pay = gross + ((gross * bonus) / 100);

    pay = pay - (pay * 30) / 100;

    

    //Calculate the speed

    speed = distance / time;

    

    //Calculate the salesAmount

    salesAmount = count * cost;

    

    outFile << "Name: " << firstName << " " << lastName << " " << "Department: " << dept << endl;

    outFile << "Monthly Gross Salary: $ " << gross << "Monthly Bonus: " << bonus << "Taxes: " << tax << endl;

    outFile << "Paycheck: $" << pay << endl;

    outFile << "Distance Travelled: " << distance << "Traveling Time: " << time << endl;

    outFile << "Average Speed: " << speed << "miles per hour" << endl;

    outFile << "Number of Coffee Cups Sold: " << count << "Cost: " << cost << endl;

    outFile << "Sales Amount = $ " << salesAmount << endl;

    

    inFile.close();

    outFile.close();

    

    system("PAUSE");

    return 0;

}﻿﻿﻿﻿﻿﻿

*/