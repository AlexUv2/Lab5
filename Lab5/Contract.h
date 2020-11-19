#pragma once
#include <iostream>
#include "Employee.h"
#include"Company.h"
#define _CRT_SECURE_NO_DEPRECATE
#ifndef CONTRACT_H_
#define CONTRACT_H_

class Contract : public Employee, public Company
{
	Date dateOfContract;
	int sum;
public:



	void setDateOfContract(int day, int month, int year);
	void setSum(int sum);


	string getDateOfContract();
	int getSum();
};

#endif
