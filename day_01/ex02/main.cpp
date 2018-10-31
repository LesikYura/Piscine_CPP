// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 21:47:16 by ylesik            #+#    #+#             //
//   Updated: 2018/10/02 21:47:16 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent z_e;
	Zombie		zombik_s = Zombie("Dead_cry", "craZy");
	Zombie		zombik_2s = Zombie("Dead_smile", "craZy");

	Zombie		*zombik1;
	Zombie		*zombik2;
	Zombie		*zombik3;
	Zombie		*zombik4;
	Zombie		*zombik5;

	zombik1 = z_e.newZombie("Mike");
	z_e.setZombieType("Slove");
	zombik2 = z_e.newZombie("Vince");
	z_e.setZombieType("Dream");
	zombik3 = z_e.newZombie("Paul");
	z_e.setZombieType("Lucky");
	zombik4 = z_e.randomChump();
	zombik5 = z_e.randomChump();

	delete (zombik1);
	delete (zombik2);
	zombik2->announce();
	delete (zombik3);
	delete (zombik4);
	delete (zombik5);
	return (0);
}
