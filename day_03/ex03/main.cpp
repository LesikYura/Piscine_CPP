// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 15:22:26 by ylesik            #+#    #+#             //
//   Updated: 2018/10/05 15:22:26 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int		main()
{
	std::srand(std::time(0));
	
	FragTrap	robot("Valera");
	ScavTrap	robocop("Robocop");
	NinjaTrap	ninja("ninja");

	robot.rangedAttack("Fedya");
	robot.meleeAttack("Glonas");
	robot.takeDamage(30);
	robot.beRepaired(10);

	robot.vaulthunter_dot_exe("Fedya");
	robot.vaulthunter_dot_exe("FragTrap");

	robocop.rangedAttack("Fedya");
	robocop.meleeAttack("Glonas");
	robocop.takeDamage(20);
	robocop.beRepaired(7);

	robocop.challengeNewcomer("Fedya");
	robocop.challengeNewcomer("ScavTrap");

	ninja.rangedAttack("Fedya");
	ninja.meleeAttack("Glonas");
	ninja.takeDamage(20);
	ninja.beRepaired(7);

	ninja.ninjaShoebox("Fedya");
	ninja.ninjaShoebox("ScavTrap");
}
