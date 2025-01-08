#include "Dog.hpp"

Dog::Dog() {
	this->_type = "Dog";
	std::cout << "A cute dog 🐶 is born!" << std::endl;
};

Dog::~Dog() {
	std::cout << "The dog runs away from the kennel!" << std::endl;
};

Dog::Dog(const Dog& copy) {
	*this = copy;
	std::cout << "A new puppy is made in the puppy factory of " << copy._type << std::endl;
};

Dog& Dog::operator=(const Dog& source) {
	this->_type = source._type;
	std::cout << "A puppy is born out of a " << source._type << std::endl;
	return (*this);
};

void Dog::makeSound()
{
	std::cout << "The dog barks and wags his tail. He is excited to meet you! 🐕" << std::endl;
};

std::string	Dog::getType() {
	return (this->_type);
};