#pragma once
#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
	public: 
		Dog();
		~Dog();
		Dog(const Dog& copy);
		Dog& operator=(const Dog& source);
		
		void 		makeSound();
		std::string	getType();
};