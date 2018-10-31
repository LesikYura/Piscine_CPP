// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 21:49:37 by ylesik            #+#    #+#             //
//   Updated: 2018/10/03 21:49:37 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanA.hpp"

HumanA::~HumanA(){};

HumanA::HumanA(std::string name, Weapon &weapon) : name_(name), _weapon(weapon)
{
	
}

void HumanA::attack(void)
{
	std::cout << this->name_ << " attacks " << this->_weapon.getType() << std::endl;
}
