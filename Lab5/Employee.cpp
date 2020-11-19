#include "Employee.h"

Employee::Employee()
{
	position = "KPI programmer";
}

Employee::Employee(string position, string name, string surName, string telNumb, int day, int month, int year):
	Person(name, surName, telNumb, day, month, year)
{
	this->position = position;
}

Employee::~Employee()
{
}

void Employee::setPosition(string position)
{
	this->position = position;
}

string Employee::getPosition()
{
	return position;
}
