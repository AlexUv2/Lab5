#include "Company.h"
#include <string>
Company::Company()
{
	compName = "None";
	fîundCapital = 0;
	//Äàòà îñíîâàíèÿ ïî óìîë÷àíèþ óñòàíîâèëà çíà÷åíèÿ
}

Company::Company(string compName, int dayF, int monthF, int yearF, int foundCapital, 
	string name, string surName, string telNumb, int day, int month, int year): Person(name,  surName,  telNumb,  day,  month,  year)
{
	this->compName = compName;
	//dateOfFoundation.setDate(dayF, monthF, yearF);
	dateOfFoundation.setDay(dayF);
	dateOfFoundation.setMonth(monthF);
	dateOfFoundation.setYear(yearF);

	this->fîundCapital = foundCapital;
}

Company::~Company()
{
}


void Company::setCompName(string compName)
{
	this->compName = compName;
}

void Company::setDateOfFoundation(int day, int month, int year)
{
	dateOfFoundation.setDay(day);
	dateOfFoundation.setMonth(month);
	dateOfFoundation.setYear(year);
}

void Company::setFoundCap(int foundCapital)
{
	this->fîundCapital = foundCapital; 
}

string Company::getCompName()
{
	return compName;
}

int Company::getFoundCaptial()
{
	return fîundCapital;
}

string Company::getDateOfFoundation()
{
	return to_string(dateOfFoundation.getDay()) + "." + to_string(dateOfFoundation.getMonth()) + "." + to_string(dateOfFoundation.getYear());
}


