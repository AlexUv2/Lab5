#include "Contract.h"
#include <string>
void Contract::setDateOfContract(int day, int month, int year)
{
	dateOfContract.setDay(day);
	dateOfContract.setMonth(month);
	dateOfContract.setYear(year);
}

void Contract::setSum(int sum)
{
	this->sum = sum;
}

string Contract::getDateOfContract()
{
	return to_string(dateOfContract.getDay()) + "." + to_string(dateOfContract.getMonth()) + "." + to_string(dateOfContract.getYear());
}
