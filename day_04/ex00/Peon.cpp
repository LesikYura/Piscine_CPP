#include "Peon.hpp"

// Peon::Peon() {};

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
};

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
};

Peon::Peon(Peon const &src) : Victim(src._name)
{
	*this = src;
}

Peon &Peon::operator=(Peon const &rhs)
{
	if (this != &rhs)
		this->_name = rhs._name;
	return (*this);
}

std::string Peon::getName(void) const { return this->_name; }

std::ostream &operator<<(std::ostream &os, Peon const &obj)
{
	os << "I am " << obj.getName() << ", and I like otters !" << std::endl;
	return (os);
}

void Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}