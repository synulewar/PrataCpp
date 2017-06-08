// chapter4/10
#include <iostream>
#include <array>
using namespace std;
int main()
{
	const int arraySize = 3;

	cout << "Provide times of your three last 40 m dash: " << endl;
	cout << "Dash 1: ";
	array<float, arraySize> times;
	cin >> times[0];
	cout << "Dash 2: ";
	cin >> times[1];
	cout << "Dash 3: ";
	cin >> times[2];

	float average = (times[0] + times[1] + times[2])/arraySize;

//Display times and average

	cout << "Time 1: " << times[0] << endl;
	cout << "Time 2: " << times[1] << endl;
	cout << "Time 3: " << times[2] << endl;

	cout << "Average time : " << average << endl;







return 0;
}
