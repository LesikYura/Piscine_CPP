// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ylesik <ylesik@student.unit.ua>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 17:06:53 by ylesik            #+#    #+#             //
//   Updated: 2018/10/03 17:06:53 by ylesik           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
  private:
	Zombie	*z_hord;
	int		num;

  public:
	ZombieHorde(int N);
	~ZombieHorde();

	void announce(void);
};

#endif
