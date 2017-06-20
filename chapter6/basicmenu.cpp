// chapter6/3
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	cout << "Please enter one of following choices: a,b,c or d: " << endl;
	cout << "a) ananas\t b) banan" << endl;
	cout << "c) cytryna\t d) dynia" << endl;
	char ch;
	cin >> ch;
	while (ch != 'a' && ch != 'b' && ch != 'c' && ch != 'd')
	{
		cout << "Please enter a,b,c or d: ";
		cin >> ch;
	}

	switch (ch)
	{
		case 'a': cout << "Pyszny ananas" << endl;
		break;

		case 'b': cout << "Zolty banan" << endl;
		break;

		case 'c': cout << "Kwasna cytryna" << endl;
		break;

		case 'd': cout << "Zupa z dyni" << endl;
		break;

	}

	return EXIT_SUCCESS;
}
