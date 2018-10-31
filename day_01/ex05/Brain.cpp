// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 19:20:46 by ylesik            #+#    #+#             //
//   Updated: 2018/10/03 19:20:47 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"

Brain::Brain(void)
{
	std::stringstream mem;

	mem << this;
	this->address_ = mem.str();
}

Brain::~Brain(void) {}

std::string Brain::identify(void) const
{
	return (this->address_);
}
