#include "Cat.hpp"

Cat::Cat() {
	catBrain = new Brain();
	this->_type = "Cat";
	std::cout << "A pretty cat 🐱 is born!" << std::endl;
};

Cat::~Cat() {
	delete catBrain;
	std::cout << "The cat escapes into the wild!" << std::endl;
};

Cat::Cat(const Cat& copy) : Animal(copy) {
	*this = copy;
	std::cout << "A new kitten is made in the kitten mill of " << copy._type << std::endl;
};

Cat& Cat::operator=(const Cat& source) {
	if (this != &source)
	{
		this->_type = source._type;
		std::cout << "A kitty is born out of a " << source._type << std::endl;
	}
	return (*this);
};

void Cat::makeSound()
{
	std::cout << "The cat meows and purrs, and then gently bumps your leg with her head. 🐈" << std::endl;
};

std::string	Cat::getType() const {
	if (this->_type.empty() == true)
		return "Empty type";
	else
		return this->_type;
};