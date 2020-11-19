#include "Contract.h"
#include <string>
Contract::Contract()
{
	sum = 0;
}

Contract::Contract(int sum, int dayC, int monthC, int yearC, string position, string name, string surName, string telNumb, int day, int month, int year,
	string compName, int dayF, int monthF, int yearF, int foundCapital):
	Employee(position, name, surName, telNumb, day, month, year),
	Company(compName, dayF, monthF, yearF, foundCapital, name, surName, telNumb, day, month, year)
{
	this->sum = sum;
	dateOfContract.setDay(dayC);
	dateOfContract.setMonth(monthC);
	dateOfContract.setYear(yearC);
}
Contract::~Contract()
{
}
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

int Contract::getSum()
{
	return sum;
}
