#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"

int main ()
{
	// std::cout << "TEST #1" << std::endl;
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// ICharacter* me = new Character("me");
	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
	// delete me;
	// delete src;

	std::cout << "TEST #2" << std::endl;
	ICharacter *Gandalf = new Character("Gandalf");
	ICharacter *Saruman = new Character("Saruman");
	IMateriaSource *grimoire = new MateriaSource();
	grimoire->learnMateria(new Ice());
	grimoire->learnMateria(new Ice());
	grimoire->learnMateria(new Ice());
	grimoire->learnMateria(new Cure());
	grimoire->learnMateria(new Cure());
	AMateria *staffOfGood;
	staffOfGood = grimoire->createMateria("cure");
	staffOfGood = grimoire->createMateria("cure");
	staffOfGood = grimoire->createMateria("ice");
	staffOfGood = grimoire->createMateria("ice");
	staffOfGood = grimoire->createMateria("ice");
	AMateria *staffOfEvil;
	staffOfEvil = grimoire->createMateria("ice");
	staffOfEvil = grimoire->createMateria("ice");
	staffOfEvil = grimoire->createMateria("ice");
	staffOfEvil = grimoire->createMateria("ice");
	Saruman->equip(staffOfEvil);
	Saruman->use(0, *Gandalf);
	Saruman->use(1, *Gandalf);
	Saruman->use(2, *Gandalf);
	Saruman->use(3, *Gandalf);
	Saruman->use(3, *Gandalf);
	Gandalf->equip(staffOfGood);
	Gandalf->use(0, *Gandalf);
	Gandalf->use(2, *Saruman);
	Gandalf->unequip(3);
	Gandalf->use(1, *Saruman);
	
	delete Gandalf;
	delete Saruman;
	delete grimoire;
	// delete staffOfGood;
	// delete staffOfEvil;

	return 0;
} 