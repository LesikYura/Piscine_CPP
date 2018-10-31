#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{

  private:
	std::string _name;
	std::string _title;
	Sorcerer();

  public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &src);
	Sorcerer &operator=(Sorcerer const &src);
	~Sorcerer();

	void introduce(void) const;
	std::string getName(void) const;
	std::string getTitle(void) const;

	void polymorph(Victim const &) const;
};

std::ostream &operator<<(std::ostream &os, Sorcerer const &obj);

#endif
