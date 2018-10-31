// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 22:34:28 by ylesik            #+#    #+#             //
//   Updated: 2018/10/05 22:34:29 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string const name) : ClapTrap(name), hit_points(60), max_hit_points(60), energy_points(120), max_energy_points(120), level(1),
											   melee_a_d(60), ranged_a_d(5), armor_d_reduction(0)
{
	std::cout << " NinjaTrap: " << name_ << " created" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << " NinjaTrap: " << name_ << " destroyd" << std::endl;
}

void NinjaTrap::ninjaShoebox(std::string const &target)
{
	unsigned int result = energy_points - 25;

	if (result <= 0)
		std::cout << "FR4G-TP " << this->name_ << " Out of energy !" << std::endl;
	else
	{
		std::cout << "FR4G-TP " << this->name_ << " attacks <" + target + "> and screem ";
		energy_points = result;
		void (NinjaTrap::*f[5])(void) = {
			&NinjaTrap::blight_bot,
			&NinjaTrap::funzerking,
			&NinjaTrap::mechromagician,
			&NinjaTrap::rubber_ducky,
			&NinjaTrap::miniontrap};
		(this->*f[(rand() % 5)])();
	}
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &obj)
{
	if (this != &obj)
	{
	}
	return (*this);
}