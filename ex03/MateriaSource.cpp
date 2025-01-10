#include "MateriaSource.hpp"

MateriaSource::MateriaSource() { };
MateriaSource::MateriaSource(std::string const & type) : _type(type) {
};
MateriaSource::~MateriaSource() { };
MateriaSource::MateriaSource(const MateriaSource& copy) {
	*this = copy;
};
MateriaSource& MateriaSource::operator=(const MateriaSource& copy) {
	this->_type = copy._type;
	return *this;
};

void MateriaSource::learnMateria(AMateria*)
{

};

AMateria* MateriaSource::createMateria(std::string const &)
{
	
}