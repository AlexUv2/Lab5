#pragma once
#include <iostream>
#include "Date.h"
#include "Person.h"
#define _CRT_SECURE_NO_DEPRECATE
#ifndef COMPANY_H_
#define COMPANY_H_



class Company : virtual public Person
{
protected:
	string compName;
	//Date dateOfFoundation;
	int fÓundCapital; //”ÒÚ‡ÌÓ‚˜ËÈ Í‡Ô≥Ú‡Î
public:
	Company();
	Company(string compName, int foundCapital,
		string name, string surName, string telNumb, int day, int month, int year);
	Company(const Company& cpy);
	~Company();

	void setCompName(string compName);
	//void setDateOfFoundation(int day, int month, int year);
	void setFoundCap(int foundCapital);

	string getCompName(); 
	int getFoundCaptial();
	//string getDateOfFoundation();

	

};

#endif