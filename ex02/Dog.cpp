#include "Dog.hpp"

Dog::Dog() {
	this->_dogBrain = new Brain();
	this->_type = "Dog";
	std::cout << "A cute dog 🐶 is born!" << std::endl;
};

Dog::~Dog() {
	delete _dogBrain;
	_dogBrain = nullptr;
	std::cout << "The dog runs away from the kennel!" << std::endl;
};

Dog::Dog(const Dog& copy) : Animal(copy) {
	*this = copy;
	std::cout << "A new puppy is made in the puppy factory of " << copy._type << std::endl;
};

Dog& Dog::operator=(const Dog& source) {
	if (this != &source && )
	{
		this->_type = source._type;
		if (this->_dogBrain != NULL)
			delete this->_dogBrain;
		this->_dogBrain = new Brain(*source._dogBrain);
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

const std::string	Dog::getIdea(int i) const
{
	return this->_dogBrain->getIdea(i);
};

void	Dog::setIdea(int i, std::string newIdea)
{
	this->_dogBrain->setIdea(i, newIdea);
};