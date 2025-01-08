#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->_type = "WrongCat";
	std::cout << "A mechanical wrongcat 🤖 is made!" << std::endl;
};

WrongCat::~WrongCat() {
	std::cout << "The wrongcat falls into a sewer!" << std::endl;
};

WrongCat::WrongCat(const WrongCat& copy) {
	*this = copy;
	std::cout << "A mechanical wrongcat is made in a LITERAL kitten factory, owned by " << copy._type << std::endl;
};

WrongCat& WrongCat::operator=(const WrongCat& source) {
	this->_type = source._type;
	std::cout << "A mechanical wrongcat is made from nuts and bolts of " << source._type << std::endl;
	return (*this);
};

void WrongCat::makeSound()
{
	std::cout << "WrongCat says ME-0-W 🤖! It doesn't fool you..." << std::endl;
};

std::string	WrongCat::getType() {
	return (this->_type);
};