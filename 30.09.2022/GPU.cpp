#include "GPU.h"
GPU::GPU()
{
	name = "none\n";
	price = 0;
}

void GPU::SetName(string n)
{
	name = n;

}

string GPU::GetName()const
{
	return name;
}

void GPU::SetPrice(const double p)
{
	price = p;
}

double GPU::GetPrice()const
{
	return price;
}