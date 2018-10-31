// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 19:32:51 by ylesik            #+#    #+#             //
//   Updated: 2018/10/05 19:32:51 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include <iostream>
#include <string>

class ScavTrap
{
  private:
	std::string name_;
	unsigned int hit_points;
	unsigned int max_hit_points;
	unsigned int energy_points;
	unsigned int max_energy_points;
	unsigned int level;
	unsigned int melee_a_d;
	unsigned int ranged_a_d;
	unsigned int armor_d_reduction;

  public:

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(std::string const &target);
	void random_atack(void);
	void blight_bot(void);
	void funzerking(void);
	void mechromagician(void);
	void rubber_ducky(void);
	void miniontrap(void);

	ScavTrap	&operator=(ScavTrap const &obj);
	ScavTrap(std::string const name);
	ScavTrap();
	~ScavTrap();
};

#endif
