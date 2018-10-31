// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 19:21:30 by ylesik            #+#    #+#             //
//   Updated: 2018/10/03 19:21:31 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

Brain		Human::getBrain(void)
{
	return (this->brain_);
}

std::string	Human::identify(void)
{
	return (this->brain_.identify());
}
