#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <exception>
#include <vector>
#include <map>
#include <list>
#include <algorithm>

template <typename T>

int easyfind(T list, int value)
{

	std::list<int>::const_iterator it = list.begin();
	std::list<int>::const_iterator ite = list.end();

	ptrdiff_t i = 0;

	try
	{
		while (it != ite)
		{
			if (*it == value)
				return (i);
			it++;
			i++;
		}
	}
	catch (std::exception &e)
	{
		throw std::exception();
	}
	if (it != list.end())
		return (i);
	throw std::exception();
}

#endif