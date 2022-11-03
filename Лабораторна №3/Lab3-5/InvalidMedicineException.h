#pragma once
#include <string>
using namespace std;

class InvalidMedicineException
{
	string message;
public:
	InvalidMedicineException(string message);

	string getMessage();
};

