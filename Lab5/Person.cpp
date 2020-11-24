#include "Person.h"

Person::Person()
{
	this->name = "No Name";
	this->surName = "No Surname";
	this->telNumb = "0000000000";
}

Person::Person(string name, string surName, string telNumb, int day, int month, int year): Date(day, month, year)
{
	this->name = name;
	this->surName = surName;
	this->telNumb = telNumb;
	setDay(day);
	setMonth(month);
	setYear(year);
}

Person::Person(const Person& cpy) : Date(cpy.day, cpy.month, cpy.year)
{
	name = cpy.name;
	surName = cpy.surName;
	telNumb = cpy.telNumb;
}

Person::~Person()
{
}

void Person::setName(string name)
{
	this->name = name;
}

void Person::setSurName(string surName)
{
	this->surName = surName;
}

void Person::setTelNumb(string telNumb)
{
	this->telNumb = telNumb;
}

string Person::getName()
{
	return name;
}

string Person::getSurName()
{
	return surName;
}

string Person::getTelNumb()
{
	return telNumb;
}



