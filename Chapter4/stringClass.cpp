// chapter4/2
#include <iostream>
#include <string>
using namespace std;
int main()
{
string name;
string dessert;
cout << "Enter your name:\n";
cin >> name; // reads through newline
cout << "Enter your favorite dessert:\n";
cin >> dessert;
cout << "I have some delicious " << dessert;
cout << " for you, " << name << ".\n";
return 0;
}
