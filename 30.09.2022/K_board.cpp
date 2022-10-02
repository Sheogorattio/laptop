#include "K_board.h"
K_board::K_board()
{
	name = "none\n";
	price = 0;
}

void K_board::SetName(string n)
{
	name = n;

}

string K_board::GetName() const
{
	return name;
}

void K_board::SetPrice(const double p)
{
	price = p;
}

double K_board::GetPrice() const
{
	return price;
}