#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"

int main ()
{
	std::cout << "TEST #1" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	std::cout << "TEST #2" << std::endl;
	Character *Gandalf = new Character("Gandalf");
	Character *Saruman = new Character("Saruman");
	MateriaSource *grimoire = new MateriaSource();
	grimoire->learnMateria(new Ice());
	grimoire->learnMateria(new Ice());
	grimoire->learnMateria(new Cure());
	grimoire->learnMateria(new Cure());
	grimoire->learnMateria(new Cure()); //no room for this
	grimoire->displayMaterias();

	AMateria *goodSpell1 = grimoire->createMateria("cure");
	Gandalf->equip(goodSpell1);
	AMateria *goodSpell2 = grimoire->createMateria("cure");
	Gandalf->equip(goodSpell2);
	AMateria *goodSpell3 = grimoire->createMateria("ice");
	Gandalf->equip(goodSpell3);
	Gandalf->displayInventory();
	AMateria *evilSpell1 = grimoire->createMateria("ice");
	AMateria *evilSpell2 = grimoire->createMateria("ice");
	AMateria *evilSpell3 = grimoire->createMateria("ice");
	AMateria *evilSpell4 = grimoire->createMateria("ice");
	AMateria *evilSpell5 = grimoire->createMateria("ice");
	Saruman->equip(evilSpell1);
	Saruman->equip(evilSpell2);
	Saruman->equip(evilSpell3);
	Saruman->equip(evilSpell4);
	Saruman->equip(evilSpell5);
	Saruman->displayInventory();

	Saruman->use(0, *Gandalf);
	Saruman->use(1, *Gandalf);
	Saruman->use(2, *Gandalf);
	Saruman->use(3, *Gandalf);
	Saruman->use(3, *Gandalf);
	Saruman->use(4, *Gandalf);
	Gandalf->use(0, *Gandalf);
	Gandalf->use(2, *Saruman);
	Gandalf->unequip(3);
	Gandalf->use(1, *Saruman);
	
	delete Gandalf;
	delete Saruman;
	delete grimoire;
	delete evilSpell5;

	return 0;
} 