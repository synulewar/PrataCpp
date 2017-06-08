// chapter4/4
#include <iostream>
#include <string>
using namespace std;
int main()
{
string name;
string lastName;
string textSeparator = ", ";

cout << "Enter your name: ";
cin >> name;
cout << "Enter last name: ";
cin >> lastName;
string finalString = lastName + textSeparator + name;
cout << finalString << endl;
return 0;
}
