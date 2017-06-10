// chapter5/4
#include <iostream>
#include <cstdlib>
using namespace std;
int originalBalance = 100;
double daphneInterest = 0.10;
double cleoInterest = 0.05;

int main()
{

double  daphneBalance, cleoBalance;
daphneBalance = cleoBalance = originalBalance;
double daphneYearIncome = originalBalance * daphneInterest;

int i = 0;
while(daphneBalance >= cleoBalance)
{
	daphneBalance += daphneYearIncome;
	cleoBalance += cleoBalance*cleoInterest;
	i++;
	cout << "After " << i << " years " << " Daphne will have " << daphneBalance
			<< " and Cleo will have " << cleoBalance << endl;
}

cout << "Cleo is richer now! Smart move Cleo!" << endl;

return EXIT_SUCCESS;
}
