// chapter5/9
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
const string done = "done";

int main()
{

	cout << "Enter words (to stop type done):" << endl;

	string word;
	int wordCount = 0;

	do
	{
		cin >> word;
		wordCount++;
	} while (word != done);

	cout << "You entered total of " << wordCount << " words" << endl;

	return EXIT_SUCCESS;
}
