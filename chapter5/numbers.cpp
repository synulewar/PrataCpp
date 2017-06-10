// chapter5/3
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

cout << "Provide integer. If you want to terminate program insert 0: ";
int input;
cin >> input;

int sum = 0;
while (input)
{
	sum += input;
	cout << "Current sum: " << sum << endl;
	cout << "Provide another number: ";
	cin >> input;
}
cout << "0 was found, terminate program! Final sum: " << sum << endl;

return EXIT_SUCCESS;
}
