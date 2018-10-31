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

void Fixed::operator=(Fixed const &obj)
{
	std::cout << "Assignation operator called" << std::endl;
	this->raw_ = obj.raw_;
}

std::ostream &operator<<(std::ostream &os, Fixed const &obj)
{
	os << obj.toFloat();
	return (os);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->raw_);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->raw_ = raw;
}

float Fixed::toFloat(void) const
{
	float res = (float)(this->raw_);
	res /= (1 << Fixed::bits_);
	return (res);
}

int Fixed::toInt(void) const
{
	return ((this->raw_) >> Fixed::bits_);
}

Fixed::Fixed(float const &val)
{
	std::cout << "Float constructor called" << std::endl;
	this->raw_ = (roundf(val * (1 << Fixed::bits_)));
}

Fixed::Fixed(int const &val)
{
	std::cout << "Int constructor called" << std::endl;
	this->raw_ = (val << Fixed::bits_);
}

Fixed::Fixed(Fixed const &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(void) : raw_(0)
{
	std::cout << "Default constructor called" << std::endl;
};

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
};
