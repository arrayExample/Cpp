/*
Kevin Lippincott
For-LoopAlgorithms
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	//(a)
	int alpha[50];

	//(b)
	int alpha[50] = { -1 };

	//(c)
	cout << alpha[0] << endl;

	//(d)
	alpha[24] = 62;

	//(e)
	alpha[9] = ((alpha[49] * 3) + 10);

	//(f)
	for (int i = 0; i < 50; i++)
	{
		if (i == i*2 || i == i*3)
		{
			cout << alpha[i] << endl;
		}
	}

	//(g)
	cout << alpha[49] << endl;

	//(h)
	for (int i = 0; i < 50; i++)
	{
		cout << alpha[i] << endl;
		if ((i + 1) % 15 == 0)
		{
			cout << "\n" << endl;
		}
	}

	//(i)
	for (int i = 0; i < 50; i+=2)
	{
		cout << alpha[i] << endl;
	}

	//(j)
	for (int i = 0; i < 50; i++)
	{
		int difAlpha[50] = { 0 };
		difAlpha[i] = alpha[i] - alpha[i - 1];
	}

	return 0;
}
