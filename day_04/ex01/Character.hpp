#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
  protected:
	std::string _name;
	int _ap;
	AWeapon *_weapon;

  public:
	Character(std::string const &name);
	~Character(void);
	Character(Character const &src);

	Character &operator=(Character const &rhs);

	void recoverAP(void);
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);

	std::string const &getName(void) const;
	int getAP() const;
	AWeapon const *getWeapon(void) const;
};

std::ostream &operator<<(std::ostream &os, Character const &rhs);

#endif
