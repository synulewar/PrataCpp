#include <iostream>
#include <cstring>
using namespace std;
char * getname(void);

int main()
{
	char * name;
	name = getname();
	cout << name << "A tu adres " << (int *) name;
	delete [] name;

	name = getname();
	cout << name << "A tu adres " << (int *) name;
	delete [] name;


	return 0;
}

char * getname()
{
	char temp[80];
	cout << "Enter co tam chcesz: ";
	cin >> temp;
	char * ptr = new char[strlen(temp)+1];
	strcpy(ptr, temp);
	return ptr;
}
