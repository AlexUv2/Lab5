#pragma once
#include <iostream>
#include "Date.h"
#include "Person.h"
#define _CRT_SECURE_NO_DEPRECATE
#ifndef COMPANY_H_
#define COMPANY_H_



class Company : virtual public Person
{
	string compName;
	Date dateOfFoundation;
	int fîundCapital; //Óñòàíîâ÷èé êàï³òàë
public:

	Company();
	Company(string compName, int dayF, int monthF, int yearF, int foundCapital,
		string name, string surName, string telNumb, int day, int month, int year);
	~Company();

	void setCompName(string compName);
	void setDateOfFoundation(int day, int month, int year);
	void setFoundCap(int foundCapital);

	string getCompName(); 
	int getFoundCaptial();
	string getDateOfFoundation();

	

};

#endif