#include "Company.h"
#include <string>
Company::Company()
{
	compName = "None";
	fîundCapital = 0;
	//Äàòà îñíîâàíèÿ ïî óìîë÷àíèþ óñòàíîâèëà çíà÷åíèÿ
}

Company::Company(string compName, int foundCapital, 
	string name, string surName, string telNumb, int day, int month, int year): Person(name, surName, telNumb, day, month, year)
{
	this->compName = compName;
	this->fîundCapital = foundCapital;
	//dateOfFoundation.setDate(dayF, monthF, yearF);
	//dateOfFoundation.setDay(dayF);
	//dateOfFoundation.setMonth(monthF);
	//dateOfFoundation.setYear(yearF);
}

Company::Company(const Company& cpy) : Person(cpy.name, cpy.surName, cpy.telNumb, cpy.day, cpy.month, cpy.year)
{
	compName = cpy.compName;
	fîundCapital = cpy.fîundCapital;
}

Company::~Company()
{
}


void Company::setCompName(string compName)
{
	this->compName = compName;
}

/*void Company::setDateOfFoundation(int day, int month, int year)
{
	dateOfFoundation.setDay(day);
	dateOfFoundation.setMonth(month);
	dateOfFoundation.setYear(year);
}*/

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

/*string Company::getDateOfFoundation()
{
	return to_string(dateOfFoundation.getDay()) + "." + to_string(dateOfFoundation.getMonth()) + "." + to_string(dateOfFoundation.getYear());
}*/


