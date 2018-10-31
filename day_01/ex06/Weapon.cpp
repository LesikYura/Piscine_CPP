// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 21:49:15 by ylesik            #+#    #+#             //
//   Updated: 2018/10/03 21:49:15 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Weapon.hpp"

Weapon::Weapon(){};
Weapon::~Weapon(){};

Weapon::Weapon(std::string weapon) : type(weapon)
{
	
}
void Weapon::setType(std::string val)
{ 
	this->type = val; 
}

std::string const &Weapon::getType() const
{
	return this->type;
}