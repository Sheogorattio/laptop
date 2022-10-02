#include "Printer.h"

Printer::Printer()
{
	name = "noname";
	price = 0;
}

Printer::Printer(const Printer& obj)
{
	name = obj.name;
	price = obj.price;
}

Printer::Printer(string n, const double p)
{
	name = n;
	price = p;
}

void Printer::SetName(string n)
{
	name = n;

}

string Printer::GetName()const
{
	return name;
}

void Printer::SetPrice(const double p)
{
	price = p;
}

double Printer::GetPrice()const
{
	return price;
}
