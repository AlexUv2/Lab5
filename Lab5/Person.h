#pragma once
#include <iostream>
#include "Date.h"
#define _CRT_SECURE_NO_DEPRECATE
#ifndef PERSON_H_
#define PERSON_H_
using namespace std;



class Person : virtual public Date
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


	string getName();
	string getSurName();
	string getTelNumb();



};

#endif