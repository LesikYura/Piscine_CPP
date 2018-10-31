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

bool	Fixed::operator>(Fixed const &obj) const
{
	return (this->raw_ > obj.raw_);
}

bool	Fixed::operator<(Fixed const &obj) const
{
	return (this->raw_ < obj.raw_);
}

bool	Fixed::operator>=(Fixed const &obj) const
{
	return (this->raw_ >= obj.raw_);
}

bool	Fixed::operator<=(Fixed const &obj) const
{
	return	(this->raw_ <= obj.raw_);
}

bool	Fixed::operator==(Fixed const &obj) const
{
	return (this->raw_ == obj.raw_);
}

bool	Fixed::operator!=(Fixed const &obj) const
{
	return (this->raw_ != obj.raw_);
}

// arithmetic operators
Fixed	Fixed::operator+(Fixed const &obj) const
{
	Fixed sum = Fixed(this->toFloat() + obj.toFloat());
	return (sum);
}

Fixed	Fixed::operator-(Fixed const &obj) const
{
	Fixed sum = Fixed(this->toFloat() - obj.toFloat());
	return (sum);
}

Fixed	Fixed::operator*(Fixed const &obj) const
{
	Fixed sum = Fixed(this->toFloat() * obj.toFloat());
	return (sum);
}

Fixed	Fixed::operator/(Fixed const &obj) const
{
	Fixed sum = Fixed(this->toFloat() / obj.toFloat());
	return (sum);
}

// increment Decrement
Fixed	&Fixed::operator++(void)
{
	this->raw_++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return (temp);
}

Fixed	&Fixed::operator--(void)
{
	this->raw_--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return (temp);
}

// max min
Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}

void	Fixed::operator=(Fixed const &obj)
{
	this->raw_ = obj.raw_;
}

std::ostream &operator<<(std::ostream &os, Fixed const &obj)
{
	os << obj.toFloat();
	return (os);
}

int		Fixed::getRawBits(void) const
{
	return (this->raw_);
}

void	Fixed::setRawBits(int const raw)
{
	this->raw_ = raw;
}

float	Fixed::toFloat(void) const
{
	float res = (float)(this->raw_);
	res /= (1 << Fixed::bits_);
	return (res);
}

int		Fixed::toInt(void) const
{
	return ((this->raw_) >> Fixed::bits_);
}

Fixed::Fixed(float const &val)
{
	this->raw_ = (roundf(val * (1 << Fixed::bits_)));
}

Fixed::Fixed(int const &val)
{
	this->raw_ = (val << Fixed::bits_);
}

Fixed::Fixed(Fixed const &obj)
{
	*this = obj;
}

Fixed::Fixed(void) : raw_(0){};

Fixed::~Fixed(void)
{
};
