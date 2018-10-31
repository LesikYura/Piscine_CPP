// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 22:01:48 by ylesik            #+#    #+#             //
//   Updated: 2018/10/05 22:01:48 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const name) : name_(name)
{
	std::cout << " ClapTrap: " << name_ << " created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << " ClapTrap: " << name_ << " destroyd" << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << " ClapTrap: " << name_ << " rangedAttack " << target << " >> " << ranged_a_d << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << " ClapTrap: " << name_ << " meleeAttack " << target << " >> " << melee_a_d << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points - amount > 0)
		hit_points -= amount;
	else
		hit_points = 0;
	std::cout << " ClapTrap: " << name_ << " taked damage by " << amount << " >> " << hit_points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_points + amount <= max_hit_points)
		hit_points += amount;
	else
		hit_points = max_hit_points;
	std::cout << " ClapTrap: " << name_ << " be repaired " << amount << " >> " << hit_points << std::endl;
}

void ClapTrap::blight_bot(void)
{
	std::cout << "\"This blight_bot atack!\"" << std::endl;
}

void ClapTrap::funzerking(void)
{
	std::cout << "\"This funzerking atack!\"" << std::endl;
}

void ClapTrap::mechromagician(void)
{
	std::cout << "\"This mechromagician atack!\"" << std::endl;
}

void ClapTrap::rubber_ducky(void)
{
	std::cout << "\"This rubber_ducky atack!\"" << std::endl;
}

void ClapTrap::miniontrap(void)
{
	std::cout << "\"This miniontrap atack!\"" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{
	if (this != &obj)
	{
	}
	return (*this);
}