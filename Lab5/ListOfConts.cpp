#include "ListOfConts.h"

void ListOfConts::addContractToList(Contract obj)
{
	if (lst.empty())
	{
		lst = {};
	}
	lst.push_back(obj);
}

void ListOfConts::AddContractAtPosition(int position, Contract obj)
{
	if (lst.empty())
	{
		lst = {};
	}
	auto begin = lst.cbegin();
	int i = 1;
	while (i != position)
	{
		begin++;
		i++;
	}
	lst.emplace(begin, obj);
}

void ListOfConts::DeleteContractAtPosition(int positionOfNumber)
{
	auto begin = lst.cbegin();
	int i = 1;
	while (i != positionOfNumber)
	{
		begin++;
		i++;
	}
	lst.erase(begin);
}

void ListOfConts::DeleteAllContract()
{
	if (!lst.empty())
	{
		lst.clear();
	}
}

void ListOfConts::SizeOfList()
{
	cout << " Size of Contract List: " << lst.size() << endl;
}


