#pragma once
#include <string>
#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string 		_name;
		static int const	_inventorySize = 4;
		static int const	_floorSize = _inventorySize * 4;
		AMateria*			_inventory[_inventorySize];
		AMateria*			_floor[_floorSize];
		void				initInventory();
		void				emptyPockets();

	public:
		Character();
		Character(std::string name);
		~Character();
		Character(const Character& copy);
		Character& operator=(const Character& copy);

		std::string const &	getName() const;
		void 				equip(AMateria* m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter& target);
		void 				displayInventory();
		void				displayFloor();
		void 				sweepTheFloor();
		void				setName(std::string name);
};