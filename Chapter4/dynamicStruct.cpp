#include <iostream>
using namespace std;

struct karma
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	karma * ps = new karma;
	cout << "Podaj nazwe czegos? " << endl;
	cin.get(ps->name, 20);
	cout  << "Podaj ilosc:";
	cin >> (*ps).volume;
	cout << "No to jeszcze dawaj cene";
	cin >> ps->price;

//Teraz drukujemy

	cout << ps->name << " " << ps->volume << " " << ps->price << endl;
	cout << (*ps).name << " " << (*ps).volume << " " << (*ps).price << endl;
	delete ps;
	return 0;
}
