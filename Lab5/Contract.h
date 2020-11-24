#pragma once
#include <iostream>
#include "Employee.h"
#include"Company.h"
#include"Person.h"
#define _CRT_SECURE_NO_DEPRECATE
#ifndef CONTRACT_H_
#define CONTRACT_H_

class Contract : public Employee, public Company
{
	//Date dateOfContract;
	int sum;
public:
	Contract();
	Contract(int sum, string position, string name, string surName, string telNumb, int day, int month, int year,
		string compName, int foundCapital);
	Contract(const Contract& cpy);
	~Contract();

	//void setDateOfContract(int day, int month, int year);
	void setSum(int sum);


	//string getDateOfContract();
	int getSum();
};

#endif
