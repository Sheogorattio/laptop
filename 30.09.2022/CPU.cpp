#include "CPU.h"
CPU::CPU()
{
	name = "none\n";
	price = 0;
}

void CPU::SetName(string n)
{
	name = n;

}

string CPU::GetName()const
{
	return name;
}

void CPU::SetPrice(const double p)
{
	price = p;
}

double CPU::GetPrice()const
{
	return price;
}