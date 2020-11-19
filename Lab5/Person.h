#pragma once
#include <iostream>
#include "Date.h"
#define _CRT_SECURE_NO_DEPRECATE
#ifndef PERSON_H_
#define PERSON_H_
using namespace std;



class Person : public Date
{
	string name;
	string surName;
	string telNumb;
	//Date date;

	public:
	
	Person();
	Person(string name, string surName, string telNumb, int day, int month, int year);


	void setName(string name);
	void setSurName(string surName);
	void setTelNumb(string telNumb);
	

	void setDate(int day, int month, int year);

};

#endif