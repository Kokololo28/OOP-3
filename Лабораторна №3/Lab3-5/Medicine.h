#pragma once
#include <string>
#include "InvalidMedicineException.h"
#include <iostream>
using namespace std;

class Medicine
{
	string name;
	int amount;
	double oneItemPrice;
public:
	Medicine(string name, int amount, double oneItemPrice);
	Medicine& operator+=(int amount);
	Medicine& operator-=(int amount);
	Medicine operator+(int oneItemPrice);
	Medicine operator-(int oneItemPrice);
	double getTotalPrice();
	string getName();
	int getAmount();
	double getOneItemPrice();
	friend ostream& operator<<(ostream& os, const Medicine& medicine);
};

