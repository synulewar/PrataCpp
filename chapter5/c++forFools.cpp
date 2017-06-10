// chapter5/5
#include <iostream>
#include <array>
#include <string>
#include <cstdlib>
const int arSize = 12;
using namespace std;
int main()
{
array<string, arSize> months = {"January", "February", "March",
		"April", "May", "June", "July", "August", "September",
		"October", "November", "December"};

array<int, arSize> monthlySales = {123, 254, 326, 768, 145, 65, 78, 908, 323, 12, 234, 12};

int sum = 0;
for (int i = 0; i < arSize; i++)
{
	cout << "Number of sales in " << months[i] << ": " <<  monthlySales[i] << endl;
	sum += monthlySales[i];
}

cout << "Total sales for the year: " << sum << endl;

return EXIT_SUCCESS;
}
