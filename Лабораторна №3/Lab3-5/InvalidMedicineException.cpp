#include "InvalidMedicineException.h"
using namespace std;

InvalidMedicineException::InvalidMedicineException(string message)
{
	this->message = message;
}

string InvalidMedicineException::getMessage()
{
	return message;
}
