#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "A wrong animal is born all wrong!" << std::endl;
};

WrongAnimal::WrongAnimal(std::string type) {
	this->_type = type;
	std::cout << "A wrong animal " << _type << " is constructed out of metal!" << std::endl;
};

WrongAnimal::~WrongAnimal() {
	std::cout << "The wrong animal is destroyed!" << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
	*this = copy;
	std::cout << "A wrong animal constructs itself from the pieces of " << copy._type << std::endl;
};

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& source) {
	this->_type = source._type;
	std::cout << "A wrong animal is constructed from " << source._type << std::endl;
	return (*this);
};

void WrongAnimal::makeSound()
{
	std::cout << "You hear a screech of metal out of this wrong animal! Horrendous!" << std::endl;
};

std::string	WrongAnimal::getType() {
	return (this->_type);
};