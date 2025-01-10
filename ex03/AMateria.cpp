#include "AMateria.hpp"

AMateria::AMateria() { };
AMateria::AMateria(std::string const & type) : _type(type) {
};
AMateria::~AMateria() { };
AMateria::AMateria(const AMateria& copy) {
	*this = copy;
};
AMateria& AMateria::operator=(const AMateria& copy) {
	this->_type = copy._type;
	return *this;
};

std::string const & AMateria::getType() const
{

};
AMateria* AMateria::clone() const {
};

void AMateria::use(ICharacter& target) {
	if (this->_type == "ice")
		std::cout << " shoots an ice bolt at " << target.getName() << "!" << std::endl;

	if (this->_type == "cure")
		std::cout << " heals " << target.getName() << "'s wounds." << std::endl;
};