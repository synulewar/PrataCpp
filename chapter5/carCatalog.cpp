// chapter5/7
#include <iostream>
#include <string>
#include <cstdlib>
const int arSize = 12;
using namespace std;
struct car
{
	string make;
	int yearMade;
};

int main()
{
	int size;
	cout << "Enter size of cars catalog: ";
	cin >> size;
	cin.get();

	car * catalog = new car[size];

	for (int i = 0; i < size; i++ )
	{
		cout << "Car #" << i + 1 << ":" << endl;
		cout << "Please enter the make: ";
		getline(cin, catalog[i].make);
		cout << "Please enter the year made: ";
		cin >> catalog[i].yearMade;
		cin.get();
	}

	cout << "Here is your collection:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << catalog[i].yearMade << " " << catalog[i].make << endl;
	}

	return EXIT_SUCCESS;
}
