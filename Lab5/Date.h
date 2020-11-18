#pragma once
#include <iostream>
#define _CRT_SECURE_NO_DEPRECATE
#ifndef DATE_H_
#define DATE_H_

class Date
{
	int day;
	int month;
	int year;

public:
		
	Date();
	Date(int day, int month, int year);

	~Date();


	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);

	

};
#endif