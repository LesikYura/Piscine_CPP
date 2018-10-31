#include "Sorcerer.hpp"

Sorcerer::Sorcerer(){};

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
};

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born" << std::endl;
};

Sorcerer::Sorcerer(Sorcerer const &src)
{
	*this = src;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_title = rhs._title;
	}
	return (*this);
}

void Sorcerer::polymorph(Victim const &obj) const
{
	obj.getPolymorphed();
}

std::string Sorcerer::getName(void) const { return this->_name; }

std::string Sorcerer::getTitle(void) const { return this->_title; }

std::ostream &operator<<(std::ostream &os, Sorcerer const &obj)
{
	os << "I am " << obj.getName() << ", " << obj.getTitle() << ", and I like ponies !" << std::endl;

	return (os);
}