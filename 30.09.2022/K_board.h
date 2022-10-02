#pragma once
#include <iostream>
using namespace std;
class K_board
{
	string name;
	double price;
public:
	K_board();
	void SetName(string n);
	string GetName()const;
	void SetPrice(const double p);
	double GetPrice()const;
};

