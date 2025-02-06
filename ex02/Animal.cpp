#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Default animal is born!" << std::endl;
};

Animal::Animal(std::string type) {
	this->_type = type;
	std::cout << "Animal " << _type << " emerges out of the jungle!" << std::endl;
};

Animal::~Animal() {
	std::cout << "Default animal escapes!" << std::endl;
};

Animal::Animal(const Animal& source) {
	*this = source;
	std::cout << "Animal somehow copies itself from " << source._type << std::endl;
};

Animal& Animal::operator=(const Animal& source) {
	if (this != &source)
	{
		this->_type = source._type;
		std::cout << "Animal is born out of " << source._type << std::endl;
	}
	return (*this);
};

void Animal::makeSound()
{
	std::cout << "You hear a default animal sound in the wind!" << std::endl;
};

std::string	Animal::getType() const {
	if (this->_type.empty() == true)
		return "Empty type";
	else
		return this->_type;
};