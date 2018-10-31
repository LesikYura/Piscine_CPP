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
#include <string>

class Fixed
{
private:

  const int fractionalbBits;
  int		rawBits;

public:

  Fixed(void);

  Fixed(int const raw);

  Fixed(Fixed const &src);

  ~Fixed(void);

  Fixed &operator=(Fixed const &rhs);

  void setRawBits(int const raw); 

  int getRawBits(void) const;
};

#endif
