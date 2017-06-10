// chapter5/8
#include <iostream>
#include <cstring>
#include <cstdlib>
const int arSize = 100;
using namespace std;

int main()
{

	cout << "Enter words (to stop type done):" << endl;

	char word[arSize];
	int wordCount = 0;

	do
	{
		cin >> word;
		wordCount++;
	} while (strcmp(word, "done"));

	cout << "You entered total of " << wordCount << " words" << endl;

	return EXIT_SUCCESS;
}
