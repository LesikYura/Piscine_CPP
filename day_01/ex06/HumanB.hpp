// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 21:49:51 by ylesik            #+#    #+#             //
//   Updated: 2018/10/03 21:49:51 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>

#include "Weapon.hpp"

class HumanB
{
private:
  Weapon		*_weapon;
  std::string	name_;

public:
	HumanB();
	~HumanB();
	HumanB(std::string name, Weapon &weapon);
	HumanB(std::string name);
	void attack(void);
	void setWeapon(Weapon &weapon);
};

#endif
