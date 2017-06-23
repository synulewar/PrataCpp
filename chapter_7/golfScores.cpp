// chapter7/1
#include <iostream>
#include <cstdlib>
using namespace std;
const int MAXSIZE = 10;

int main()
{

	int golfScores[MAXSIZE];

	cout << "Enter max 10 golf scores, press q if you want to stop entering values.";


	for (int i = 0; i < MAXSIZE; ++i)
	{
		while(!(cin >> golfScores[i]))
			{
				cin.clear();
				while (cin.get() != '\n')
					continue;
				cout << "Invalid input. Please provide numbers!";
			}
	}
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
