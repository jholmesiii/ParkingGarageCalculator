// ParkingGarageCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CalculateCharges.h"
using namespace std;

int main()
{
	double totalHours = 0;
	double totalSurcharge = 0;
	int cars;
	int xOne = 1;
	int yOne = 1;

	cout << "How many cars parked today?" << endl;
	cin >> cars;

	double* surcharge = new double(cars);
	double* hours = new double(cars);

	for (int x = 0; x < cars; x++)
	{
		cout << "Number of hours car #"<< xOne << " parked: ";
		cin >> hours[x];
		cout << endl;
		surcharge[x] = CalculateCharges(hours[x]);

		totalHours = totalHours + hours[x];
		totalSurcharge = totalSurcharge + surcharge[x];
		xOne++;
	}

	cout << "Car		Hours		Charge" << endl;
	for (int y = 0; y < cars; y++)
	{
		cout << yOne << "		" << hours[y] << "		" << surcharge[y] << endl;
		yOne++;
	}
	cout << "Total:		" << totalHours << "		" << totalSurcharge << endl;

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
