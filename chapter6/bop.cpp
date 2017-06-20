// chapter6/4
#include <iostream>
#include <cstdlib>
using namespace std;
const int strSize = 20;
const int arrSize = 3;
enum {
	NAME, TITLE, BOPNAME
};

struct Bop {
	char fullname[strSize];
	char title[strSize];
	char bopname[strSize];
	int preference;
};

int main()
{

	Bop report[] = {{"Pavel Dragon", "Junior tester", "Pavlo", TITLE},
			{"Dominik Dryn", "Software developer", "Dudi", BOPNAME},
			{"Kasia Nendza", "Senior tester", "Kacha", NAME}};

	cout << "a) display by name\t b) display by title" << endl;
	cout << "c) display by bopname\t d) display by preference" << endl;
	cout << "q) quit" << endl;
	cout << "Enter your choice: ";
	char ch;
	cin >> ch;

	while (ch != 'q')
	{
		if (ch != 'a' && ch != 'b' && ch != 'c' && ch != 'd')
			{
				cout << "Please enter a,b,c,d or q: ";
				cin >> ch;
				continue;
			}

			switch (ch)
			{
				case 'a':
					for (int i = 0; i < arrSize; ++i)
					{
						cout << report[i].fullname << endl;
					}
				break;

				case 'b':
					for (int i = 0; i < arrSize; ++i)
					{
						cout << report[i].title << endl;
					}
				break;

				case 'c':
					for (int i = 0; i < arrSize; ++i)
					{
						cout << report[i].bopname << endl;
					}
				break;

				case 'd':
					for (int i = 0; i < arrSize; ++i)
					{
						int preference = report[i].preference;
						if (preference == NAME) {
							cout << report[i].fullname << endl;
						} else if (preference == TITLE) {
							cout << report[i].title << endl;
						} else {
							cout << report[i].bopname << endl;
						}
					}
			}
			cout << "Next choice: ";
			cin >> ch;
	}
	cout << "Bye!" << endl;
	return EXIT_SUCCESS;
}
