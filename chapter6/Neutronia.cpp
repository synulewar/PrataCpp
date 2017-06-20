// chapter6/4
#include <iostream>
#include <cstdlib>
using namespace std;
double firstTaxLvl = 5000;
double secondTaxLvl = 10000;
double thirdTaxLvl = 20000;
double fourthTaxLvl = 35000;

double secondTax = 0.1;
double thirdTax = 0.15;
double  fourthTax = 0.2;

///gernealy wrong :)
int main()
{
	cout << "Enter your income: ";
	double income;
	double totalTax;

	while (cin >> income && income > 0)
	{
		if (income > fourthTaxLvl) {
			totalTax = (income - fourthTaxLvl) * fourthTax + (fourthTaxLvl - thirdTaxLvl) * thirdTax
					+ (secondTaxLvl - firstTaxLvl) * secondTax;
		} else if (income > thirdTaxLvl) {
			totalTax = (income - thirdTaxLvl) * thirdTax
					+ (secondTaxLvl - firstTaxLvl) * secondTax;
		} else if (income > secondTaxLvl) {
			totalTax = (income - secondTaxLvl) * secondTax;
		} else if (income > firstTaxLvl)
			totalTax = (income - firstTaxLvl) * ;

		cout << "Total tax = " << totalTax << " tvarps." << endl;
		cout << "Enter another income: ";
	}

	return EXIT_SUCCESS;
}
