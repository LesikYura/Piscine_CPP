// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 19:32:44 by ylesik            #+#    #+#             //
//   Updated: 2018/10/05 19:32:45 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name), hit_points(100), max_hit_points(100), energy_points(50), max_energy_points(50), level(1),
											 melee_a_d(20), ranged_a_d(15), armor_d_reduction(3)
{
	std::cout << " ScavTrap: " << name_ << " created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << " ScavTrap: " << name_ << " destroyd" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
	unsigned int result = energy_points - 25;

	if (result <= 0)
		std::cout << "FR4G-TP " << this->name_ << " Out of energy !" << std::endl;
	else
	{
		std::cout << "FR4G-TP " << this->name_ << " attacks <" + target + "> and screem ";
		energy_points = result;
		void (ScavTrap::*f[5])(void) = {
			&ScavTrap::blight_bot,
			&ScavTrap::funzerking,
			&ScavTrap::mechromagician,
			&ScavTrap::rubber_ducky,
			&ScavTrap::miniontrap};
		(this->*f[(rand() % 5)])();
	}
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &obj)
{
	if (this != &obj)
	{

	}
	return (*this);
}
