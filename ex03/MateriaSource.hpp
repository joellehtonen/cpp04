#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _materias[4];
	public:
		void learnMateria(AMateria*) override;
		AMateria* createMateria(std::string const &) override;
};