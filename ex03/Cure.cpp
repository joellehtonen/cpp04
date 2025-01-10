#include "Cure.hpp"

Cure::Cure() : _type("cure") { };
Cure::~Cure() { };
Cure::Cure(const Cure& copy) {
	*this = copy;
};
Cure& Cure::operator=(const Cure& copy) {
	this->_type = copy._type;
	return *this;
};