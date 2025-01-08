#pragma once
#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
	public: 
		Cat();
		~Cat();
		Cat(const Cat& copy);
		Cat& operator=(const Cat& source);
		
		void 		makeSound();
		std::string	getType();
};