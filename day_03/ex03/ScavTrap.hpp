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
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
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

	void challengeNewcomer(std::string const &target);

	ScavTrap	&operator=(ScavTrap const &obj);
	ScavTrap(std::string const name);
	ScavTrap();
	~ScavTrap();
};

#endif
