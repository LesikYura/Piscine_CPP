// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/01 22:30:18 by ylesik            #+#    #+#             //
//   Updated: 2018/10/01 22:30:19 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include "ClassBook.hpp"

void	print_line_add(int i)
{
	if (i == 0)
		std::cout << "Please, enter the first name" << std::endl;
	else if (i == 1)
		std::cout << "Please, enter the last_name" << std::endl;
	else if (i == 2)
		std::cout << "Please, enter the nickname" << std::endl;
	else if (i == 3)
		std::cout << "Please, enter the login" << std::endl;
	else if (i == 4)
		std::cout << "Please, enter the postal_address" << std::endl;
	else if (i == 5)
		std::cout << "Please, enter the email_address" << std::endl;
	else if (i == 6)
		std::cout << "Please, enter the phone_number" << std::endl;
	else if (i == 7)
		std::cout << "Please, enter the birthday_date" << std::endl;
	else if (i == 8)
		std::cout << "Please, enter the favourite_meal" << std::endl;
	else if (i == 9)
		std::cout << "Please, enter the underwear_color" << std::endl;
	else if (i == 10)
		std::cout << "Please, enter the darkest_secret" << std::endl;
}

void write_command(std::string user_input[11])
{
	int i = 0;

	std::cout << "------------------------------------" << std::endl;
	while (i < 11)
	{
		print_line_add(i);

		if (!(std::getline(std::cin, user_input[i])))
			exit(0);

		if (user_input[i] == "")
			std::cout << "No data indicated." << std::endl;
		else
			i++;
	}
	std::cout << "------------------------------------" << std::endl;
}

void	search(int *n, Book Instance[8])
{
	int i = 0;

	std::cout << "+-------------------------------------------+" << std::endl;
	std::cout << "|     INDEX";
	std::cout << "|    F_NAME";
	std::cout << "|    L_NAME";
	std::cout << "|      NICK" << '|' << std::endl;
	std::cout << "+-------------------------------------------+" << std::endl;
	while (i < *n)
	{
		Instance[i].display_Num();
		std::cout << "+-------------------------------------------+" << std::endl;
		i++;
	}
	std::cout << "Please, select the necessary index." << std::endl;
	i = 0;
	std::string index_input;
	if (!(std::getline(std::cin, index_input)))
		exit(0);
	while (i < *n)
	{
		if (Instance[i].get_Index().compare(index_input) == 0)
		{
			system("clear");
			Instance[i].display_Line();
			return;
		}
		else if (index_input == "EXIT")
			exit(0);
		i++;
	}
	std::cout << "Index was not found, try SEARCH command one more time." << std::endl;
}

void	add(std::string *user_input, int *n, Book Instance[8])
{
	write_command(user_input);
	Instance[*n].setVal(user_input[0], user_input[1], user_input[2], user_input[3], user_input[4],
								 user_input[5], user_input[6], user_input[7], user_input[8], user_input[9],
								 user_input[10], n);
	(*n)++;
}

void read(int *n, Book *Instance)
{
	std::string str;
	std::string input;
	std::string	user_input[11];
	while (str != "ADD" && str != "SEARCH" && str != "EXIT")
	{
		std::cout << "Enter command: ";
		if (!(std::getline(std::cin, str)))
			exit(0);
	}
	if (str == "ADD" && *n <= 7)
		add(user_input, n, Instance);
	else if (str == "ADD" && *n > 7)
		std::cout << "Phone_book is full" << std::endl;
	else if (str == "SEARCH" && *n != 0)
		search (n, Instance);
	else if (str == "SEARCH" && *n == 0)
		std::cout << "Phone_book is empty" << std::endl;
	else if (str == "EXIT") // str.compare("EXIT")
		exit(0);
}

int		main()
{
	int			n;
	Book		Instance[8];

	n = 0;
	while (1)
		read(&n, Instance);
	return (0);
}
