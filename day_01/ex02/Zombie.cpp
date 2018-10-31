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

Zombie::Zombie(std::string name, std::string type)
{
	name_ = name;
	type_ = type;

	std::cout << "Zombie " + this->name_ + " ((" + this->type_ + ")) > LIVE!!!" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie <" + this->name_ + " ((" + this->type_ + ")) > DEAD!!!" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << "<" + this->name_ + " ((" + this->type_ + ")) > Braiiiiiiinnnssss..." << std::endl;
}
