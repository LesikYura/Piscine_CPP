// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 15:44:48 by ylesik            #+#    #+#             //
//   Updated: 2018/10/04 15:44:49 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:

  int				raw_;
  static const int	bits_ = 8;

public:

  Fixed(void);

  Fixed(int const &val);

  Fixed(float const &val);

  Fixed(Fixed const &obj);

  ~Fixed(void);

  void	operator=(Fixed const &obj);
  float	toFloat(void) const;
  int	toInt(void) const;
  int	getRawBits(void) const;
  void	setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &os, Fixed const &obj);

#endif
