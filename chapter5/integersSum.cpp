// chapter5/1
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
int a,b;
cout << "Enter two integers (first should be smaller): " << endl;
cout << "First: ";
cin >> a;
cout << "Second: ";
cin >> b;

int sum = 0;
for (int i = a; i <= b; i++ )
	sum += i;

cout << "The sum of all integers from " << a << " through " << b << " is " << sum << endl;

return EXIT_SUCCESS;
}
