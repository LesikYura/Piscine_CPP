
#include "easyfind.hpp"

int main(int ac, char **av)
{
	srand(time(0));

	if (ac != 2)
	{
		std::cout << "Please enter one value between 0 and 9 to be searched in the list." << std::endl;
		return (0);
	}

	std::list<int> list;

	list.push_back(rand() % 10);
	list.push_back(rand() % 10);
	list.push_back(rand() % 10);
	list.push_back(rand() % 10);
	list.push_back(rand() % 10);
	list.push_back(rand() % 10);
	list.push_back(rand() % 10);

	int search = atoi(av[1]);
	if (search < 0 || search > 9)
	{
		std::cout << "Please enter one value between 0 and 9 to be searched in the list." << std::endl;
		return (0);
	}

	try
	{
		int ret = easyfind(list, search);
		std::cout << "Found value [" << search << "] at index [" << ret << "]" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Value not found" << std::endl;
	}

	return 0;
}
