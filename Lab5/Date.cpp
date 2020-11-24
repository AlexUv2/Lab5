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

Date::Date(const Date& cpy)
{
	day = cpy.day;
	month = cpy.month;
	year = cpy.year;
}

Date::~Date()
{
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

void Date::setDate(int day, int month, int year)
{
	setDay(day);
	setMonth(month);
	setYear(year);
}

int Date::getDay()
{
	return this->day;
}

int Date::getMonth()
{
	return this->month;
}

int Date::getYear()
{
	return this->year;
}

void Date::showDate()
{
	std::cout << day << "." << month << "." << year;
}
