// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 21:49:21 by ylesik            #+#    #+#             //
//   Updated: 2018/10/03 21:49:21 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{

  private:
	std::string type;

  public:
	Weapon();
	Weapon(std::string weapon);
	~Weapon();
	std::string const &getType() const;
	void setType(std::string);
};

#endif