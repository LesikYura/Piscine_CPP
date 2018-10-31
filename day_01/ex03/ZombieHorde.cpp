// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 17:06:58 by ylesik            #+#    #+#             //
//   Updated: 2018/10/03 17:06:58 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{

	this->z_hord = new Zombie[N];
	this->num = N;
}
ZombieHorde::~ZombieHorde()
{
	delete[] this->z_hord;
}

void ZombieHorde::announce()
{
	int i = 0;
	while (i < this->num)
		this->z_hord[i++].announce();
}
