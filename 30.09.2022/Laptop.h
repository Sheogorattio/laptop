#pragma once
#include<iostream>
#include"CPU.h"
#include"GPU.h"
#include"HDD.h"
#include"K_board.h"
#include"Printer.h"
#include"RAM.h"
using namespace std;
class Laptop
{
	K_board board;//composition
	CPU cpu;//composition
	HDD* hdd;//agregation
	Printer* prntr;//agregation
	RAM* ram;//agregation
	GPU gpu;//composition
public:
	Laptop(HDD* _hdd, Printer* _prntr, RAM* _ram);
	void SetCPU(const CPU& obj);
	void SetHDD(const HDD& obj);
	void SetPrntr(const Printer& obj);
	void SetGPU(const GPU& obj);
	void SetKboard(const K_board& obj);
	void SetRAM(const RAM& obj);
	CPU GetCPU() const;
	HDD* GetHDD()const;
	Printer* GetPrntr()const;
	GPU GetGPU()const;
	K_board GetKboard()const;
	RAM* GetRAM()const;
	void Print()const;
};

