// chapter5/2
#include <iostream>
#include <array>
#include <cstdlib>
const int ArSize = 101;
using namespace std;

int main()
{
array<long double, ArSize> factorials;
factorials[1] = factorials[0] = 1;
for (int i = 2; i < ArSize; i++)
factorials[i] = i * factorials[i-1];
for (int i = 0; i < ArSize; i++)
cout << i << "! = " << factorials[i] << endl;
return EXIT_SUCCESS;
}
