#include "Dog.hpp"

Dog::Dog() {
	dogBrain = new Brain();
	this->_type = "Dog";
	std::cout << "A cute dog 🐶 is born!" << std::endl;
};

Dog::~Dog() {
	delete dogBrain;
	std::cout << "The dog runs away from the kennel!" << std::endl;
};

Dog::Dog(const Dog& copy) : Animal(copy) {
	*this = copy;
	std::cout << "A new puppy is made in the puppy factory of " << copy._type << std::endl;
};

Dog& Dog::operator=(const Dog& source) {
	if (this != &source)
	{
		this->_type = source._type;
		std::cout << "A puppy is born out of a " << source._type << std::endl;
	}
	return (*this);
};

void Dog::makeSound()
{
	std::cout << "The dog barks and wags his tail. He is excited to meet you! 🐕" << std::endl;
};

std::string	Dog::getType() const {
	if (this->_type.empty() == true)
		return "Empty type";
	else
		return this->_type;
};