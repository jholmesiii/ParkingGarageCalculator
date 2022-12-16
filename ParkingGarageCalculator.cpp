// ParkingGarageCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CalculateCharges.h"
using namespace std;

int main()
{
	double surcharge[5] = { 0, 0, 0, 0, 0 };
	double hrs[5] = { 0, 0, 0, 0, 0 };
	double totalhrs, totalsur;
	int cars, x;

	cout << "How many cars parked today?" << endl;
	cin >> cars;

	for (x = 1; x < cars + 1; x++)
	{
		cout << "Input number of hours the customer parked" << endl;
		cin >> hrs[x];
		cout << endl;
		surcharge[x] = CalculateCharges(hrs[x]);
	}

	totalhrs = hrs[0] + hrs[1] + hrs[2] + hrs[3] + hrs[4];
	totalsur = surcharge[0] + surcharge[1] + surcharge[2] + surcharge[3] + surcharge[4];

	cout << "Car		Hours		Charge" << endl;
	for (x = 1; x < cars + 1; x++)
	{
		cout << x << "		" << hrs[x] << "		" << surcharge[x] << endl;
	}
	cout << "Total:		" << totalhrs << "		" << totalsur << endl;

	system("pause");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
