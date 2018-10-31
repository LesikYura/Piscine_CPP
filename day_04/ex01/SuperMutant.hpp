#ifndef SUPERMUTANT_H
#define SUPERMUTANT_H

#include <string>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
  public:
	SuperMutant(void);
	~SuperMutant(void);
	SuperMutant(SuperMutant const &src);

	SuperMutant &operator=(SuperMutant const &rhs);

	virtual void takeDamage(int damage);
};

#endif