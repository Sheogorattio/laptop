#pragma once
#include <iostream>
using namespace std;
class RAM
{
	string name;
	double price;
public:
	RAM();
	RAM(string n, const double p);
	void SetName(string n);
	string GetName()const;
	void SetPrice(const double p);
	double GetPrice()const;
};

