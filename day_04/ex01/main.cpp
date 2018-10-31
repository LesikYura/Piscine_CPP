#include <iostream>
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main(void)
{
	PlasmaRifle *pr = new PlasmaRifle();
	PowerFist *pf = new PowerFist();

	SuperMutant *mutant = new SuperMutant();
	RadScorpion *scorpion = new RadScorpion();
	Character *zaz = new Character("zaz");

	std::cout << *zaz;

	zaz->equip(pr);
	std::cout << *zaz;

	zaz->equip(pf);
	zaz->attack(scorpion);
	std::cout << *zaz;

	zaz->equip(pr);
	std::cout << *zaz;

	zaz->attack(scorpion);
	std::cout << *zaz;

	zaz->attack(scorpion);
	std::cout << *zaz;

	zaz->attack(mutant);
	std::cout << *zaz;

	SuperMutant dup = *mutant;

	return (0);
}
