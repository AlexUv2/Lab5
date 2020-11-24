#include "Contract.h"
#include <string>
Contract::Contract()
{
	sum = 0;
}

Contract::Contract(int sum, string position, string name, string surName, string telNumb, int day, int month, int year,
	string compName, int foundCapital):
	Employee(position, name, surName, telNumb, day, month, year),
	Company(compName, foundCapital, name, surName, telNumb, day, month, year) 
{
	this->sum = sum;
	//dateOfContract.setDay(dayC);
	//dateOfContract.setMonth(monthC);
	//dateOfContract.setYear(yearC);


	setDay(day);
	setMonth(month);
	setYear(year);    
	setName(name);
	setSurName(surName);
	setTelNumb(telNumb);
}
Contract::Contract(const Contract& cpy):
	Employee(cpy.position, cpy.name, cpy.surName, cpy.telNumb, cpy.day, cpy.month, cpy.year),
	Company(cpy.compName, cpy.fîundCapital, cpy.name, cpy.surName, cpy.telNumb, cpy.day, cpy.month, cpy.year)
{
	sum = cpy.sum;
}
Contract::~Contract()
{
}
/*void Contract::setDateOfContract(int day, int month, int year)
{
	dateOfContract.setDay(day);
	dateOfContract.setMonth(month);
	dateOfContract.setYear(year);
}*/

void Contract::setSum(int sum)
{
	this->sum = sum;
}

/*string Contract::getDateOfContract()
{
	return to_string(dateOfContract.getDay()) + "." + to_string(dateOfContract.getMonth()) + "." + to_string(dateOfContract.getYear());
}*/

int Contract::getSum()
{
	return sum;
}
