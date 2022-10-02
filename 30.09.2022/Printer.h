#pragma once
#include <iostream>
using namespace std;
class Printer
{
	string name;
	double price;
public:
	Printer();
	Printer(const Printer& obj);
	Printer(string n, const double p);
	void SetName(string n);
	string GetName()const;
	void SetPrice(const double p);
	double GetPrice()const;
};

