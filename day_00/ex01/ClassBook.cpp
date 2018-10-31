// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassBook.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 13:50:54 by ylesik            #+#    #+#             //
//   Updated: 2018/10/02 13:50:55 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassBook.hpp"

void		Book::setVal(const std::string &first_name_, const std::string &last_name_, const std::string &nickname_, const std::string &login_, const std::string &postal_address_,
						const std::string &email_address_, const std::string &phone_number_, const std::string &birthday_date_, const std::string &favourite_meal_, const std::string &underwear_color_,
						const std::string &darkest_secret_, int *val)
{
	this->index = std::to_string((*val) + 1);
	this->first_name = first_name_;
	this->last_name = last_name_;
	this->nickname = nickname_;
	this->login = login_;
	this->postal_address = postal_address_;
	this->email_address = email_address_;
	this->phone_number = phone_number_;
	this->birthday_date = birthday_date_;
	this->favourite_meal = favourite_meal_;
	this->underwear_color = underwear_color_;
	this->darkest_secret = darkest_secret_;
}

void		Book::display_Line(void)
{
	std::cout << "First_name:" << std::endl;
	std::cout << this->first_name << std::endl;
	std::cout << "Last_name:" << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << "Nickname:" << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << "Login:" << std::endl;
	std::cout << this->login << std::endl;
	std::cout << "Postal_address:" << std::endl;
	std::cout << this->postal_address << std::endl;
	std::cout << "Email_address:" << std::endl;
	std::cout << this->email_address << std::endl;
	std::cout << "Phone_number:" << std::endl;
	std::cout << this->phone_number << std::endl;
	std::cout << "Birthday_date:" << std::endl;
	std::cout << this->birthday_date << std::endl;
	std::cout << "Favourite_meal:" << std::endl;
	std::cout << this->favourite_meal << std::endl;
	std::cout << "Underwear_color:" << std::endl;
	std::cout << this->underwear_color << std::endl;
	std::cout << "Darkest_secret:" << std::endl;
	std::cout << this->darkest_secret << std::endl;
}

void		Book::asp(std::string &val)
{
	int print_space = 10;
	int length = val.length();
	int i = 0;

	std::cout << '|';
	if (length <= 10)
	{
		print_space -= length;
		while (print_space)
		{
			std::cout << ' ';
			print_space--;
		}
		std::cout << val;
	}
	else
	{
		while (i < 9)
			std::cout << val[i++];
		std::cout << '.';
	}
}

void		Book::display_Num(void)
{
	asp(this->index);
	asp(this->first_name);
	asp(this->last_name);
	asp(this->nickname);

	std::cout << '|';
	std::cout << std::endl;
}

std::string	Book::get_Index(void)
{
	return (this->index);
}
