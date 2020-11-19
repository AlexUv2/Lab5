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
    
    Person person;

    cout << person.getMonth() << endl;



    int day = 5;
    int month = 10;
    int year = 2000;

    person.setDate(day, month, year);
    

    person.showDate();

    return 0;
}

