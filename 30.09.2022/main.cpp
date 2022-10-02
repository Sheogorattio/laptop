#include <iostream>
#include"Laptop.h"
using namespace std;
int main() {
	Printer prntr("name", 234);
	RAM ram;
	HDD	hdd;
	{
		Laptop laptop(&hdd, &prntr, &ram);
		laptop.Print();
	}
	cout << endl << prntr.GetName();
}