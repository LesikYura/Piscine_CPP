// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 19:02:19 by ylesik            #+#    #+#             //
//   Updated: 2018/10/03 19:02:20 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>

int		main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr_str = &str;
	std::string &ref_str = str;

	std::cout << *ptr_str << std::endl;
	std::cout << ref_str << std::endl;
	return (0);
}
