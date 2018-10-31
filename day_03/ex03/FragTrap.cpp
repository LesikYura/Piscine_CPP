// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 15:21:50 by ylesik            #+#    #+#             //
//   Updated: 2018/10/05 15:21:51 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const name) : ClapTrap(name), hit_points(100), max_hit_points(100), energy_points(100), level(1),
	melee_a_d(30), ranged_a_d(20), armor_d_reduction(5)
{ 
	std::cout << " FragTrap: " << name_ << " created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << " FragTrap: " << name_ << " destroyd" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	unsigned int result = energy_points - 25;

	if (result <= 0)
		std::cout << "FR4G-TP " << this->name_ << " Out of energy !" << std::endl;
	else
	{
		std::cout << "FR4G-TP " << this->name_ << " attacks <" + target + "> and screem ";
		energy_points = result;
		void (FragTrap::*f[5])(void) = {
			&FragTrap::blight_bot,
			&FragTrap::funzerking,
			&FragTrap::mechromagician,
			&FragTrap::rubber_ducky,
			&FragTrap::miniontrap};
		(this->*f[(rand() % 5)])();
	}
}

FragTrap	&FragTrap::operator=(FragTrap const &obj)
{
	if (this != &obj)
	{

	}
	return (*this);
}
