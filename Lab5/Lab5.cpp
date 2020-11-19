#include <iostream>
#include"Date.h"
#include"Person.h"
#include"Company.h"
#include"Employee.h"
#include"Contract.h"
#include"ListOfConts.h"

using namespace std;


int main()
{
    //Company company("company", 13, 3, 2002, 13000, "Alex", "Uvarovskii", "0992926016", 10, 10, 2010);

    Contract company;

    int day = 5;
    int month = 10;
    int year = 2000;

    company.setDate(day, month, year);

    company.showDate();
    
    
    cout << endl;

    
    cout << company.getDateOfFoundation();


    cout << endl << company.getName();

    return 0;
}

