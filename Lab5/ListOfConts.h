#pragma once
#include "Contract.h"
#include <list>���� // ���������� ��������� ������

#define _CRT_SECURE_NO_DEPRECATE
#ifndef LISTOFCONTS_H_
#define LISTOFCONTS_H_

class ListOfConts : public Contract
{
	list<Contract> lst;
	int numOfConts;

public:

     void addContractToList(Contract obj);
     void AddContractAtPosition(int position, Contract obj);
     void DeleteContractAtPosition(int positionOfNumber);
     void DeleteAllContract();
     void SizeOfList();
  





};
#endif
