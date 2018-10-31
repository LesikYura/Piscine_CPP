#ifndef RADSCORPION_H
#define RADSCORPION_H

#include <string>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
  public:
	RadScorpion(void);
	~RadScorpion(void);
	RadScorpion(RadScorpion const &src);

	RadScorpion &operator=(RadScorpion const &rhs);
};

#endif
