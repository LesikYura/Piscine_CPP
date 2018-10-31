#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
  public:
	Peon(std::string name);

	Peon(Peon const &src);
	~Peon();
	Peon &operator=(Peon const &src);

	void introduce(void) const;
	std::string getName(void) const;
	virtual void getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &os, Peon const &obj);

#endif