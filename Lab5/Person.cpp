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

void Person::setDate(int day, int month, int year)
{
	setDay(day);
	setMonth(month);
	setYear(year);
}

