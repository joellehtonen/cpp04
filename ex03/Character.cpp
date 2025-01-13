#include "Character.hpp"

Character::Character() {
	this->initInventory();
	std::cout << "New default character is born!" << std::endl;
};
Character::Character(std::string name) : _name(name) {
	this->initInventory();
	std::cout << "New character " << this->_name << " is born!" << std::endl;
};
Character::~Character() {
	this->sweepTheFloor();
	this->emptyPockets();
	std::cout << this->_name << " vanishes!" << std::endl;
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
		{
			if (copy._inventory[i] != NULL)
				_inventory[i] = copy._inventory[i]->clone();
		}
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
		if (this->_inventory[i] == NULL && m != NULL)
		{
			std::cout << this->getName() << " puts a potion of " << m->getType() << " into their " << i << ". pocket" << std::endl;
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << this->getName() << " cannot put the potion into their pocket" << std::endl;
	return ;
};

void Character::unequip(int idx) {
	if (idx < 0 || idx > _inventorySize)
	{
		std::cout << this->_name << " realizes they do not have a " << idx << ". pocket!" << std::endl;
		return ;
	}
	if (this->_inventory[idx] == NULL)
	{
		if (this->_inventory[idx] == NULL)
			std::cout << this->_name << " tries to drop a potion to the floor, but the pocket " << idx << " is already empty!" << std::endl;
		return ;
	}
	std::cout << this->getName() << " drops a potion of " << this->_inventory[idx]->getType() << " from their " << idx << ". pocket to the floor" << std::endl;
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
	if (idx < 0 || idx > _inventorySize)
	{
		std::cout << this->_name << " tries to use a potion, but no " << idx << ". pocket exists!" << std::endl;
		return ;
	}
	
	if (this->_inventory[idx] == NULL)
	{
		if (this->_inventory[idx] == NULL)
			std::cout << this->getName() << " tries to use a potion, but " << idx << ". pocket is empty!" << std::endl;
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
			delete this->_floor[i];
			this->_floor[i] = nullptr;
		}
	}
};

void Character::emptyPockets() {
	for (int i = 0; i < _inventorySize; i++)
	{
		if (this->_inventory[i] != NULL)
		{
			delete this->_inventory[i];
			this->_inventory[i] = nullptr;
		}
	}
};

void Character::initInventory() {
	for (int i = 0; i < _inventorySize; i++)
		this->_inventory[i] = nullptr;
	for (int i = 0; i < _floorSize; i++)
		this->_floor[i] = nullptr;
}

void Character::displayInventory() {
	for (int i = 0; i < _inventorySize; i++)
	{
		if (_inventory[i] != NULL)
			std::cout << this->_name << "'s " << i << ". pocket has a potion of " << _inventory[i]->getType() << " in it" << std::endl;
		else
			std::cout << this->_name << "'s " << i << ". pocket is empty..." << std::endl;
	}
};

void Character::displayFloor() {
	for (int i = 0; i < _floorSize; i++)
	{
		if (_floor[i] != NULL)
			std::cout << "On the " << i << ". tile, a potion is laying next to " << this->_name << "'s feet" << std::endl;

		else
			std::cout << i << ". floor tile next to " << this->_name << " is empty" << std::endl;
	}
};

void Character::setName(std::string name)
{
	this->_name = name;
};