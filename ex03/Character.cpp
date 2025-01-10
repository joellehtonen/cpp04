#include "Character.hpp"

Character::Character() { };
Character::Character(std::string name) : _name(name) {};
Character::~Character() { };
Character::Character(const Character& copy) {
	*this = copy;
	//for (int i = 0; i < 4; i++)
	//	delete _AMateria[i];
	//for (int i = 0; i < 4; i++)
		//_AMateria[i] = new copy._AMateria[i();
	
};
Character& Character::operator=(const Character& copy) {
	this->_name = copy._name;
	return *this;
};

std::string const & Character::getName() const 
{
	return(this->_name);
};

void Character::equip(AMateria* m) {
	for (int i = 0; i < _inventorySize == false; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			std::cout << this->getName() << " puts " << m->getType() << " into his pocket." << std::endl;
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << this->getName() << "'s pockets are full!" << std::endl;
	return ;
};

void Character::unequip(int idx) {
	if ((idx < 0 || idx > _inventorySize) || this->_inventory[idx] == NULL)
		return ;
	std::cout << this->getName() << " drops " << this->_inventory[idx]->getType() << " to the floor." << std::endl;
	for (int i = 0; i < _floorSize; i++)
	{
		if (this->_floor[i] == NULL)
		{
			this->_floor[i]  = this->_inventory[idx];
			this->_inventory[idx] = nullptr;
			return ;
		}
	}
	sweepTheFloor();
	this->_floor[0] = this->_inventory[idx];
	return ;
};

void Character::use(int idx, ICharacter& target) {
	AMateria->use(target);
};

void Character::sweepTheFloor() {
	for (int i = 0; i < _floorSize; i++)
		delete _floor[i];
};