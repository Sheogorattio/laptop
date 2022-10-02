#pragma once
#include <iostream>
using namespace std;
class HDD
{
	string name;
	double price;
public:
	HDD();
	HDD(string n, const double p);
	void SetName(string n);
	string GetName()const;
	void SetPrice(const double p);
	double GetPrice()const;
};

