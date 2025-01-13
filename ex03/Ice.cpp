#include "Ice.hpp"

Ice::Ice() : AMateria("ice") { };
Ice::~Ice() { };
Ice::Ice(const Ice& copy) {
	*this = copy;
};
Ice& Ice::operator=(const Ice& copy) {
	if (this != &copy)
		this->_type = copy._type;
	return *this;
};

AMateria* Ice::clone() const
{
	AMateria* newIce = new Ice();
	return (newIce);
}