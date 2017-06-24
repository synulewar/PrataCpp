// chapter7/3
#include <iostream>
#include <cstdlib>
using namespace std;
struct Box {
	char marker[40];
	float height;
	float width;
	float length;
	float volume;
};
void displayBox(Box);
void calculateVolume(Box *);

int main()
{
	//Volume will be calculated.
	Box box = {"Thomas", 12.2, 11.7, 6.8, 0};
	calculateVolume(&box);
	displayBox(box);
	return EXIT_SUCCESS;
}

void displayBox(Box box)
{
	cout << "Box maker: " << box.marker << ", height: " << box.height << ", width: "
			<< box.width << ", lenght: " << box.length << ", volume: " <<  box.volume << endl;
}

void calculateVolume(Box * box)
{
	box->volume =  box->length * box->width * box->height;
}
