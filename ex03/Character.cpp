#include "Character.hpp"

Character::Character() {
	std::cout << "New default character is born!" << std::endl;
};
Character::Character(std::string name) : _name(name) {
	std::cout << "New character " << this->_name << " is born!" << std::endl;
};
Character::~Character() {
		this->sweepTheFloor();
		this->emptyPockets();
 };
Character::Character(const Character& copy) {
	*this = copy;
};
Character& Character::operator=(const Character& copy) {
	if (this != &copy)
	{
		this->_name = copy._name;
		this->sweepTheFloor();
		this->emptyPockets();
		for (int i = 0; i < _inventorySize; i++)
			_inventory[i] = copy._inventory[i]->clone();
	}
	return *this;
};

std::string const & Character::getName() const 
{
	return(this->_name);
};

void Character::equip(AMateria* m) {
	for (int i = 0; i < _inventorySize; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			std::cout << this->getName() << " puts " << m->getType() << " spell into his pocket." << std::endl;
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << this->getName() << "'s pockets are full!" << std::endl;
	return ;
};

void Character::unequip(int idx) {
	if ((idx < 0 || idx > _inventorySize) || this->_inventory[idx] == NULL)
	{
		std::cout << this->getName() << " tries to drop something to the floor, but is unable to do so!" << std::endl;
		return ;
	}
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
	if ((idx < 0 || idx > _inventorySize) || this->_inventory[idx] == NULL)
	{
		if (this->_inventory[idx] == NULL)
			std::cout << this->getName() << " tries to use materia for a spell, but " << idx << ". pocket is empty!" << std::endl;
		return ;
	}
	std::cout << this->getName();
	this->_inventory[idx]->use(target);
	return ;
};

void Character::sweepTheFloor() {
	for (int i = 0; i < _floorSize; i++)
	{	
		if (this->_floor[i] != NULL)
		{
			delete _floor[i];
			this->_floor[i] = nullptr;
		}
	}
};

void Character::emptyPockets() {
	for (int i = 0; i < _inventorySize; i++)
	{
		if (this->_inventory[i] != NULL)
		{
			delete _inventory[i];
			this->_inventory[i] = nullptr;
		}
	}
}