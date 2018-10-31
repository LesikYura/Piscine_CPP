// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 21:46:53 by ylesik            #+#    #+#             //
//   Updated: 2018/10/02 21:46:56 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	this->type_ = "Default-type";
}

ZombieEvent::~ZombieEvent() 
{

}

void ZombieEvent::setZombieType(std::string type)
{
	this->type_ = type;
}

Zombie *ZombieEvent::randomChump(void)
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
	Zombie *z = new Zombie(name_buf[(rand() % 10)], this->type_);

	z->announce();
	return (z);
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie *z = new Zombie(name, this->type_);

	return (z);
}
