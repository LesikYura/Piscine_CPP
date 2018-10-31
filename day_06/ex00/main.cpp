
#include "TypeString.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please, input the parameter.";
		return (0);
	}

	TypeString typestring(av[1]);

	std::cout << "char: ";
	try
	{
		char c = static_cast<char>(typestring);
		if (isprint(c))
			std::cout << '\'' << c << '\'';
		else
			std::cout << "Non displayable";
	}
	catch (std::exception)
	{
		std::cout << "impossible";
	}
	std::cout << std::endl;

	std::cout << "int: ";

	try
	{
		std::cout << static_cast<int>(typestring);
	}
	catch (std::exception)
	{
		std::cout << "impossible";
	}
	std::cout << std::endl;

	std::cout << std::fixed;
	std::cout.precision(1);

	std::cout << "float: ";
	try
	{
		std::cout << static_cast<float>(typestring) << 'f';
	}
	catch (std::exception)
	{
		std::cout << "impossible";
	}
	std::cout << std::endl;

	std::cout << "double: ";
	try
	{
		std::cout << static_cast<double>(typestring);
	}
	catch (std::exception)
	{
		std::cout << "impossible";
	}
	std::cout << std::endl;
}
