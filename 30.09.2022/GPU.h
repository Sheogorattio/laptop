#pragma once
#include <iostream>
using namespace std;
class GPU
{
	string name;
	double price;
public:
	GPU();
	void SetName(string n);
	string GetName()const;
	void SetPrice(const double p);
	double GetPrice()const;
};

