#ifndef POWERFIST_H
#define POWERFIST_H

#include <string>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
  public:
	PowerFist(void);
	~PowerFist(void);
	PowerFist(PowerFist const &src);

	PowerFist &operator=(PowerFist const &rhs);

	void attack() const;
};

#endif