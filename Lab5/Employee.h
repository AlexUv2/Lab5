#pragma once
#include <iostream>
#include "Person.h"
#define _CRT_SECURE_NO_DEPRECATE
#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class Employee : virtual public Person
{
	string position;
 public:

	 Employee();
	 Employee(string position, string name, string surName, string telNumb, int day, int month, int year);


	 ~Employee();



	 void setPosition(string position);
	 string getPosition();
};


#endif

