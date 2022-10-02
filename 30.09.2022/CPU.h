#pragma once
#include <iostream>
using namespace std;
class CPU
{
	string name;
	double price;
public:
	CPU();
	void SetName(string n);
	string GetName()const;
	void SetPrice(const double p);
	double GetPrice()const;
};

