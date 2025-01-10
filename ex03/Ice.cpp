#include "Ice.hpp"

Ice::Ice() : _type("ice") { };
Ice::~Ice() { };
Ice::Ice(const Ice& copy) {
	*this = copy;
};
Ice& Ice::operator=(const Ice& copy) {
	this->_type = copy._type;
	return *this;
};