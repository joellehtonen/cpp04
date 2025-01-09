#pragma once
#include <string>
#include <iostream>

class WrongAnimal {
	protected:
		std::string _type;

	public: 
		WrongAnimal();
		WrongAnimal(std::string type);
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal& copy);
		WrongAnimal& operator=(const WrongAnimal& source);

		void 		makeSound();
		std::string	getType();
};