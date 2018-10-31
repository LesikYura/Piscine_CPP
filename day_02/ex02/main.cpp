// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 15:51:08 by ylesik            #+#    #+#             //
//   Updated: 2018/10/04 15:51:08 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"
using namespace std;
int		main(void)
{
	string a = "string = a";
	string b = "string = b";
	cout <<  << endl;
		Fixed		a;
		Fixed const	b(Fixed(5.05f) * Fixed(2));

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;

		std::cout << a << std::endl;
		std::cout << b << std::endl;

		std::cout << Fixed::max(a, b) << std::endl;

		return (0);
}
