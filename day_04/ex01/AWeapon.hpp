#ifndef AWEAPON_H
#define AWEAPON_H

#include <string>

class AWeapon
{
  private:
	std::string _name;
	int _apcost;
	int _damage;

  public:
	AWeapon(std::string const &name, int apcost, int damage);
	~AWeapon(void);
	AWeapon(AWeapon const &src);

	AWeapon &operator=(AWeapon const &rhs);

	std::string const &getName(void) const;
	int getAPCost() const;
	int getDamage() const;

	virtual void attack() const = 0;
};

#endif