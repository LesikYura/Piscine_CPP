#include "Victim.hpp"

Victim::Victim(){};

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason" << std::endl;
};

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victime called " << _name << " just popped" << std::endl;
};

Victim::Victim(Victim const &src)
{
	*this = src;
}

Victim &Victim::operator=(Victim const &rhs)
{
	if (this != &rhs)
		this->_name = rhs._name;
	return (*this);
}

std::string Victim::getName(void) const { return this->_name; }

std::ostream &operator<<(std::ostream &os, Victim const &obj)
{
	os << "I am " << obj.getName() << ", and I like otters !" << std::endl;
	;

	return (os);
}

void Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}