// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 15:44:44 by ylesik            #+#    #+#             //
//   Updated: 2018/10/04 15:44:44 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"

Fixed::Fixed(void) : fractionalbBits(8) 
{
	this->setRawBits(0);
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) : fractionalbBits(8)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->rawBits = rhs.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
