// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 19:21:17 by ylesik            #+#    #+#             //
//   Updated: 2018/10/03 19:21:18 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef	BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <sstream>

class Brain
{
private:
	std::string address_;
public:
	Brain(void);
	~Brain(void);

	std::string identify(void) const;
};

#endif
