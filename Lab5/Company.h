#pragma once
#include <iostream>
#include "Date.h"
#include "Person.h"
#define _CRT_SECURE_NO_DEPRECATE
#ifndef COMPANY_H_
#define COMPANY_H_



class Company : public Date, public Person
{
};

#endif