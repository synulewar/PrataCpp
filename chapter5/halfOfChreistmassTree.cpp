// chapter5/10
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
const string done = "done";

int main()
{

	cout << "Enter number of rows" << endl;
	int rowsNumber;
	cin >> rowsNumber;
	char christmasTree[rowsNumber][rowsNumber];

	for (int i = 1; i <= rowsNumber; i++)
	{
		for (int j = 1; j <= rowsNumber - i; j++)
		{
			cout << ".";
		}

		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}

		cout << endl;
	}

	return EXIT_SUCCESS;
}
