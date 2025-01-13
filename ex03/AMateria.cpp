#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "New materia is made out of thin air." << std::endl;
};
AMateria::AMateria(std::string const & type) : _type(type) {
};
AMateria::~AMateria() { };
AMateria::AMateria(const AMateria& copy) {
	*this = copy;
};
AMateria& AMateria::operator=(const AMateria& copy) {
	if (this != &copy)
		this->_type = copy._type;
	return *this;
};

std::string const & AMateria::getType() const
{
	return (this->_type);
};

void AMateria::use(ICharacter& target) {
	if (this->_type == "ice")
		std::cout << " shoots an ice bolt at " << target.getName() << "!" << std::endl;

	if (this->_type == "cure")
		std::cout << " heals " << target.getName() << "'s wounds." << std::endl;
};