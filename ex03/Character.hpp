#pragma once
#include <string>
#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string 		_name;
		static int const	_inventorySize = 4;
		static int const	_floorSize = _inventorySize * 2;
		AMateria*			_inventory[_inventorySize];
		AMateria*			_floor[_floorSize];

	public:
		Character();
		Character(std::string name);
		~Character();
		Character(const Character& copy);
		Character& operator=(const Character& copy);

		std::string const &	getName() const override;
		void 				equip(AMateria* m) override;
		void 				unequip(int idx) override;
		void 				use(int idx, ICharacter& target) override;

		void 				sweepTheFloor();
};;