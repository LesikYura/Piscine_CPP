// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 22:34:39 by ylesik            #+#    #+#             //
//   Updated: 2018/10/05 22:34:40 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef Ninja_TRAP_HPP
#define Ninja_TRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
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
	void ninjaShoebox(std::string const &target);

	NinjaTrap &operator=(NinjaTrap const &obj);
	NinjaTrap(std::string const name);
	NinjaTrap();
	~NinjaTrap();
};

#endif