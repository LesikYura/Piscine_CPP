#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src) : AWeapon("Plasma Rifle", 5, 21)
{
	*this = src;
}

PlasmaRifle::~PlasmaRifle(void)
{
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &rhs)
{
	if (this != &rhs)
		AWeapon::operator=(rhs);
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
