
#include <iostream>

#define size 5

template <typename T>

void iter(T *array, size_t len, void (*func)(T &))
{
	size_t i;

	i = 0;
	while (i < len)
	{
		(*func)(array[i]);
		i++;
	}
	std::cout << std::endl;
}

template <typename T>

void print(T &data)
{
	std::cout << data << std::endl;
}

int main(void)
{
	int array_ints[] = {11, 222, 33, 42, 5555};

	std::string array_strings[] = {"1.AA", "2.BB", "3.CC", "4.DD", "5.EE"};

	iter<int>(array_ints, size, &print<int>);

	iter<std::string>(array_strings, size, &print<std::string>);

	return (0);
}
