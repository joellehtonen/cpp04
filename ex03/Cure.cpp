#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
};
Cure::~Cure() { };
Cure::Cure(const Cure& copy) {
	*this = copy;
};
Cure& Cure::operator=(const Cure& copy) {
	if (this != &copy)
		this->_type = copy._type;
	return *this;
};

AMateria* Cure::clone() const
{
	AMateria* newCure = new Cure();
	return (newCure);
}