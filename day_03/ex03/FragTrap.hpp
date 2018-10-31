// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 15:21:59 by ylesik            #+#    #+#             //
//   Updated: 2018/10/05 15:22:00 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef	FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
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

	void		vaulthunter_dot_exe(std::string const &target);

	FragTrap	&operator=(FragTrap const &obj);
	FragTrap(std::string const name);
	FragTrap();
	~FragTrap();

};

#endif
