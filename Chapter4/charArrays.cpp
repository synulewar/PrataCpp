// chapter4/3
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
int arraySize = 20;
char name[arraySize];
char lastName[arraySize];
char finalArray[2*arraySize];
char textSeparator[] = ", ";

cout << "Enter your name: ";
cin.getline(name, arraySize);
cout << "Enter last name: ";
cin.getline(lastName, arraySize);
strcat(finalArray, name);
strcat(finalArray, textSeparator);
strcat(finalArray, lastName);
cout << finalArray << endl;
return 0;
}
