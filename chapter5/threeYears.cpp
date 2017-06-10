// chapter5/6
#include <iostream>
#include <array>
#include <string>
#include <cstdlib>
const int monthsNumber = 12;
const int years = 3;
using namespace std;
int main()
{
//input data
array<string, monthsNumber> months = {"January", "February", "March",
		"April", "May", "June", "July", "August", "September",
		"October", "November", "December"};

int monthlySales[years][monthsNumber] =
{
	{123, 254, 326, 768, 145, 65, 78, 908, 323, 12, 234, 12},
	{223, 654, 126, 758, 1235, 465, 178, 208, 353, 12, 734, 112},
	{908, 323, 12, 234, 12, 223, 654, 126, 758, 1235, 465, 178}
};

int sum = 0;
int sumOverYears = 0;
for (int i = 0; i < years; i++)
{
	for (int j = 0; j < monthsNumber; j++)
	{
		sum += monthlySales[i][j];
	}
	cout << "Total sales for the year: " << i + 1 << " : " << sum << endl;
	sumOverYears += sum;
	sum = 0;
}

cout << "Total sales over three years: " << sumOverYears << endl;
return EXIT_SUCCESS;
}
