// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 21:49:42 by ylesik            #+#    #+#             //
//   Updated: 2018/10/03 21:49:43 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
  std::string	name_;
  Weapon		&_weapon;

public:
	HumanA();
	~HumanA();
	HumanA(std::string name, Weapon &weapon);
	void attack(void);
};

#endif
