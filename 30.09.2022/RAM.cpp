#include "RAM.h"
RAM::RAM()
{
	name = "none\n";
	price = 0;
}
RAM::RAM(string n, const double p)
{
	name = n;
	price = p;
}

void RAM::SetName(string n)
{
	name = n;

}

string RAM::GetName()const
{
	return name;
}

void RAM::SetPrice(const double p)
{
	price = p;
}

double RAM::GetPrice()const
{
	return price;
}