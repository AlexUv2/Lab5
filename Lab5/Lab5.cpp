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
    Contract contract(10, "Director", "sasha", "uvar", "9359995", 13, 3, 2002, "Italy", 13000);

    int day = 5;
    int month = 10;
    int year = 2000;

    //contract.setDay(day);
    
    
    cout << endl;
    cout << contract.getSum() << endl;
    cout << contract.getPosition() << endl;
    cout << contract.getName() << endl;
    cout << contract.getSurName() << endl;
    cout << contract.getTelNumb() << endl;
    cout << contract.getDay() << endl;
    cout << contract.getMonth() << endl;
    cout << contract.getYear() << endl;
    cout << contract.getCompName() << endl;
    cout << contract.getFoundCaptial() << endl;


    contract.setName("Sasha");


    cout << endl;

    cout << contract.getSum() << endl;
    cout << contract.getPosition() << endl;
    cout << contract.getName() << endl;
    cout << contract.getSurName() << endl;
    cout << contract.getTelNumb() << endl;
    cout << contract.getDay() << endl;
    cout << contract.getMonth() << endl;
    cout << contract.getYear() << endl;
    cout << contract.getCompName() << endl;
    cout << contract.getFoundCaptial() << endl;
    
    return 0;
}

