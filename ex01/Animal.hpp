#pragma once
#include <string>
#include <iostream>

class Animal {
	protected:
		std::string _type;

	public: 
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal(const Animal& copy);
		Animal& operator=(const Animal& source);

		virtual void 	makeSound();
		std::string		getType() const;
};