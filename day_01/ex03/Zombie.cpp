// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 21:46:31 by ylesik            #+#    #+#             //
//   Updated: 2018/10/02 21:46:32 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::string name_buf[] = {
		"Flipper",
		"Climber",
		"Bender",
		"Hider",
		"Screecher",
		"Augmented Zombie",
		"Radical Zombie",
		"Curious Zombie",
		"Fatty",
		"Thomas"};
	std::string type_buf[] = {
		"Crazyy",
		"Dream",
		"Red",
		"King_helper",
		"Screechers_type",
		"C++_Zombie",
		"Radical PHP",
		"Curious",
		"Strong",
		"Normal"};
	this->type_ = type_buf[(rand() % 10)];
	this->name_ = name_buf[(rand() % 10)];
}

Zombie::~Zombie()
{
	std::cout << "Zombie gone..." << this->name_ << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << "<" + this->name_ + " ((" + this->type_ + ")) > Braiiiiiiinnnssss..." << std::endl;
}
