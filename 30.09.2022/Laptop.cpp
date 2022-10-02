#include "Laptop.h"

Laptop::Laptop(HDD *_hdd, Printer* _prntr, RAM* _ram) :hdd(_hdd), prntr(_prntr), ram(_ram)
{
	string name;
	double price;
	cout << "enter keyboard name\n";
	cin >> name;
	board.SetName(name);
	cout << "enter keyboard price\n";
	cin >> price;
	board.SetPrice(price);
	cout << "enter cpu name\n";
	cin >> name;
	cpu.SetName(name);
	cout << "enter cpu price\n";
	cin >> price;
	cpu.SetPrice(price);
	cout << "enter gpu name\n";
	cin >> name;
	gpu.SetName(name);
	cout << "enter gpu price\n";
	cin >> price;
	gpu.SetPrice(price);
}

void Laptop::SetCPU(const CPU& obj)
{
	cpu.SetName(obj.GetName());
	cpu.SetPrice(obj.GetPrice());
}
void Laptop::SetGPU(const GPU& obj)
{
	gpu.SetName(obj.GetName());
	gpu.SetPrice(obj.GetPrice());
}
void Laptop::SetRAM(const RAM& obj)
{
	ram->SetName(obj.GetName());
	ram->SetPrice(obj.GetPrice());
}
CPU Laptop::GetCPU() const
{
	return cpu;
}
HDD* Laptop::GetHDD() const
{
	return hdd;
}
Printer* Laptop::GetPrntr() const
{
	return prntr;
}
GPU Laptop::GetGPU() const
{
	return gpu;
}
K_board Laptop::GetKboard() const
{
	return board;
}
RAM* Laptop::GetRAM() const
{
	return ram;
}
void Laptop::Print() const
{
	cout << "CPU:\t" << cpu.GetName() << " (" << cpu.GetPrice() << ")\n";
	cout << "GPU:\t" << gpu.GetName() << " (" << gpu.GetPrice() << ")\n";
	cout << "RAM:\t" << ram->GetName() << " (" << ram->GetPrice() << ")\n";
	cout << "HDD:\t" << hdd->GetName() << " (" << hdd->GetPrice() << ")\n";
	cout << "Keyboard:\t" << board.GetName() << " (" << board.GetPrice() << ")\n";
	cout << "Printer:\t" << prntr->GetName() << " (" << prntr->GetPrice() << ")\n";
}
void Laptop::SetPrntr(const Printer& obj)
{
	prntr->SetName(obj.GetName());
	prntr->SetPrice(obj.GetPrice());
}
void Laptop::SetHDD(const HDD& obj)
{
	hdd->SetName(obj.GetName());
	hdd->SetPrice(obj.GetPrice());
}
void Laptop::SetKboard(const K_board& obj)
{
	board.SetName(obj.GetName());
	board.SetPrice(obj.GetPrice());
}
