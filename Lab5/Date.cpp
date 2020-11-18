#include "Date.h"
#define _CRT_SECURE_NO_DEPRECATE

Date::Date()
{
	this->day = 1;
	this->month = 1;
	this->year = 1900;
}

Date::Date(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

Date::~Date()
{
	std::cout << " Date desrtuctor called";
}

void Date::setDay(int day)
{
		this->day = day;
}

void Date::setMonth(int month)
{
	this->month = month;
}

void Date::setYear(int year)
{
	this->year = year;
}
