// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 21:49:56 by ylesik            #+#    #+#             //
//   Updated: 2018/10/03 21:49:56 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanB.hpp"

HumanB::HumanB(){};
HumanB::~HumanB(){};

HumanB::HumanB(std::string name, Weapon &weapon)
{
	this->name_ = name;
	this->_weapon = &weapon;
}

HumanB::HumanB(std::string name) : name_(name) {}

void HumanB::attack(void)
{
	std::cout << this->name_ << " attacks " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}