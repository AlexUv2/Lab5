#pragma once
#include <iostream>
#define _CRT_SECURE_NO_DEPRECATE
#ifndef DATE_H_
#define DATE_H_

class Date
{
protected:
	int day;
	int month;
	int year;

public:
		
	Date();
	Date(int day, int month, int year);
	Date(const Date& cpy);
	~Date();


	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);

	void setDate(int day, int month, int year);


	int getDay();
	int getMonth();
	int getYear();


	void showDate();
};
#endif