// chapter7/2
#include <iostream>
#include <cstdlib>
using namespace std;
const int MAXSIZE = 10;

int getData(int arr[], int size);
void displayData(const int arr[], int size);
int calculateAverage(const int arr[], int size);

int main()
{

	int golfScores[MAXSIZE];
	int enteredData;
	
	enteredData = getData(golfScores, MAXSIZE);
	
	if (enteredData == 0)
	{
		cout << "No scores entered. Terminate program" << endl;
		return EXIT_SUCCESS;
	}
	
	displayData(golfScores, enteredData);
	cout << "Average score: " << calculateAverage(golfScores, enteredData) << endl;
	return EXIT_SUCCESS;
}

int getData(int arr[], int size)
{
	char ch;
	bool quit = false;
	cout << "Enter first golf score or press q if you want to stop entering values: ";
	int i;
	for (i = 0; i < size; ++i)
	{
		while(!(cin >> arr[i]) )
		{				
			do
			{
				cin.clear();
				ch = cin.get();
				if (ch == 'q')
				{
					quit = true;
					break;
				}
			}while(ch != '\n');
				
			if (quit) 
			{
				break;
			}
				cout << "Invalid input. Please provide number!";
		}
		
		if (quit) {
			break;
		}
		cout << "Provide another scrore or q to terminate input: ";
	}
	
	return i;
}

void displayData(const int arr[], int size)
{
	for(int i = 0; i < size; ++i)
	{
		cout << "Score number #" << (i + 1) << ": " << arr[i] << endl;
	}
}

int calculateAverage(const int arr[], int size) 
{
	int total = 0;
	for(int i = 0; i < size; ++i)
	{
		total += arr[i];
	}
	
	return total/size;
	
}
