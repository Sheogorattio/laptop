#include "HDD.h"

HDD::HDD()
{
	name = "noname";
	price = 0;
}

HDD::HDD(string n, const double p)
{
	name = n;
	price = p;
}

void HDD::SetName(string n)
{
	name = n;

}

string HDD::GetName()const
{
	return name;
}

void HDD::SetPrice(const double p)
{
	price = p;
}

double HDD::GetPrice()const
{
	return price;
}