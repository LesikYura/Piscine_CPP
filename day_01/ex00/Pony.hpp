// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 19:58:25 by ylesik            #+#    #+#             //
//   Updated: 2018/10/02 19:58:29 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony
{
private:
  std::string _pony_name;
public:
  Pony(std::string pony_name);
  ~Pony(void);
};

#endif