// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 19:58:36 by ylesik            #+#    #+#             //
//   Updated: 2018/10/02 19:58:37 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string pony_name)
{
	this->_pony_name = pony_name;
	std::cout << "Pony created " << this->_pony_name << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Pony destroy!" << std::endl;
}