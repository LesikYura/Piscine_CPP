#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim
{

  protected:
	std::string _name;

  private:
	Victim();

  public:
	Victim(std::string name);
	Victim(Victim const &src);
	Victim &operator=(Victim const &src);
	~Victim();

	void introduce(void) const;
	std::string getName(void) const;
	virtual void getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &os, Victim const &obj);

#endif