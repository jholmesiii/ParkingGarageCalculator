#include <iostream>
using namespace std;
//
//**********************************************************
// BEGINNING OF FUNCTIONS
//**********************************************************

double CalculateCharges(double hrs)
{
	double surcharge;

	if (hrs <= 3.00)
		surcharge = 2.00;
	else if (hrs > 3.00 && hrs <= 19.00)
		surcharge = (hrs / 2) + .50;
	else
		surcharge = 10.00;
	return surcharge;
}