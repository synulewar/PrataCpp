// chapter7/1
#include <iostream>
#include <cstdlib>
using namespace std;
struct Pair {
	double x;
	double y;
};
double calculateHarmonic(Pair);

int main()
{
	cout << "Enter pair of numbers (provide 0 for at least one to terminate the program): ";
	Pair pair;

	do
	{
		while(!(cin >> pair.x >> pair.y))
			{
				cin.clear();
				while (cin.get() != '\n')
					continue;
				cout << "Invalid input. Please provide numbers!";
			}

		if(pair.x == 0 || pair.y == 0)
		{
			break;
		}

		cout << "Harmonic mean of " << pair.x << " and " << pair.y << " equals " << calculateHarmonic(pair) << endl;

		cout << "Provide another pair of numbers: ";
	}while(true);

	return EXIT_SUCCESS;
}

double calculateHarmonic(Pair pair)
{
	return (2* pair.x * pair.y)/(pair.x + pair.y);
}
