#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	forgetMaterias();
	std::cout << "A new source of materia is conjured!" << std::endl;
};
MateriaSource::~MateriaSource() {
	forgetMaterias();
};
MateriaSource::MateriaSource(const MateriaSource& copy) {
	*this = copy;
};
MateriaSource& MateriaSource::operator=(const MateriaSource& copy) {
	if (this != &copy)
	{
		forgetMaterias();
		for (int i = 0; i < _maxPages; i++)
			this->_materias[i] = copy._materias[i]->clone();
	}
	return *this;
};

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < _maxPages; i++)
	{
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = materia;
			std::cout << "New spell " << materia->getType() << " is written to the page " << i << std::endl;
			return ;
		}
	}
	std::cout << "There is no room to memorize new materias/spells..." << std::endl;
	return ;
};

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < _maxPages; i++)
	{
		if (this->_materias[i] && this->_materias[i]->getType() == type)
		{
			std::cout << "Materia " << _materias[i]->getType() << " is created" << std::endl;
			return this->_materias[i]->clone();
		}
	}
	std::cout << "The character is not familiar with this materia." << std::endl;
	return 0;
};

void MateriaSource::forgetMaterias()
{
	for (int i = 0; i < _maxPages; i++)
	{
		if (_materias[i] != NULL)
			delete _materias[i];
		_materias[i] = nullptr;
	}
};