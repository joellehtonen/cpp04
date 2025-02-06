#include "Cat.hpp"

Cat::Cat() {
	this->_catBrain = new Brain();
	this->_type = "Cat";
	std::cout << "A pretty cat 🐱 is born!" << std::endl;
};

Cat::~Cat() {
	delete _catBrain;
	_catBrain = nullptr;
	std::cout << "The cat escapes into the wild!" << std::endl;
};

Cat::Cat(const Cat& source) : Animal(source) {
	this->_type = source._type;
	this->_catBrain = new Brain(*source._catBrain);
	std::cout << "A new kitten is made in the kitten mill of " << source._type << std::endl;
};

Cat& Cat::operator=(const Cat& source) {
	if (this != &source)
	{
		this->_type = source._type;
		if (this->_catBrain != nullptr)
			delete this->_catBrain;
		this->_catBrain = new Brain(*source._catBrain);
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

const std::string	Cat::getIdea(int i) const
{
	return this->_catBrain->getIdea(i);
};

void	Cat::setIdea(int i, std::string newIdea)
{
	std::cout << this->getType() << " is thinking of a new idea..." << std::endl;
	this->_catBrain->setIdea(i, newIdea);
};