#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	forgetMaterias();
	std::cout << "A magical new source of materia is conjured!" << std::endl;
};
MateriaSource::~MateriaSource() {
	forgetMaterias();
	std::cout << "The source of materia is destroyed" << std::endl;
};
MateriaSource::MateriaSource(const MateriaSource& copy) {
	*this = copy;
};
MateriaSource& MateriaSource::operator=(const MateriaSource& copy) {
	if (this != &copy)
	{
		forgetMaterias();
		for (int i = 0; i < _maxPages; i++)
		{
			if (copy._materias[i] != NULL)
				this->_materias[i] = copy._materias[i]->clone();
		}
	}
	std::cout << "Materia source replicates itself" << std::endl;
	return *this;
};

void MateriaSource::learnMateria(AMateria* materia)
{
	if (materia == NULL)
		return ;
	for (int i = 0; i < _maxPages; i++)
	{
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = materia;
			std::cout << "New alchemical formula for " << materia->getType() << " potion is written to the page " << i << std::endl;
			return ;
		}
	}
	std::cout << "But there is no room to write new formulas..." << std::endl;
	return ;
};

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < _maxPages; i++)
	{
		if (this->_materias[i] && this->_materias[i]->getType() == type)
		{
			std::cout << "A potion of " << _materias[i]->getType() << " is created" << std::endl;
			return this->_materias[i]->clone();
		}
	}
	std::cout << "The character is not familiar with the formula for " << type << ", no potions were created" << std::endl;
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

void MateriaSource::displayMaterias()
{
	for (int i = 0; i < _maxPages; i++)
	{
		if (_materias[i] != NULL)
			std::cout << i << ". page has the formula for " << _materias[i]->getType() << " potion written on it" << std::endl;
		else
			std::cout << i << ". page is empty..." << std::endl;
	}
}