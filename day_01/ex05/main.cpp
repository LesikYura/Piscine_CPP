// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 19:20:26 by ylesik            #+#    #+#             //
//   Updated: 2018/10/03 19:20:27 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"
#include <iostream>

int		main(void)
{
	Human	bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	return (0);
}
