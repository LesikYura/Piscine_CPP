// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 19:58:02 by ylesik            #+#    #+#             //
//   Updated: 2018/10/02 19:58:05 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include "Pony.hpp"

void	ponyOnTheStack(void)
{
	Pony Instance = Pony("Green!");
}

void	ponyOnTheHeap(void)
{
	Pony *Instance = new Pony("Black!");

	delete Instance;
}

int		main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();

	return (0);
}
