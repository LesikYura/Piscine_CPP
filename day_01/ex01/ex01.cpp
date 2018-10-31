// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex01.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 21:42:11 by ylesik            #+#    #+#             //
//   Updated: 2018/10/02 21:42:11 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>

void memoryLeak(void)
{
	std::string *panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;

	delete panthere;
}
