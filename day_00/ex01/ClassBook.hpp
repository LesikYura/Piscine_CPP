// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassBook.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 13:50:17 by ylesik            #+#    #+#             //
//   Updated: 2018/10/02 13:50:18 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLASSBOOK_HPP
# define CLASSBOOK_HPP

#include <iostream>

class Book
{

  private:
	std::string index;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favourite_meal;
	std::string underwear_color;
	std::string darkest_secret;

  public:
	void 		setVal(const std::string &first_name, const std::string &last_name, const std::string &nickname, const std::string &login, const std::string &postal_address,
				   const std::string &email_address, const std::string &phone_number, const std::string &birthday_date, const std::string &favourite_meal, const std::string &underwear_color,
				   const std::string &darkest_secret, int *var);

	void 		asp(std::string &val);

	void 		display_Num(void);

	void 		display_Line(void);

	std::string get_Index(void);
};

#endif