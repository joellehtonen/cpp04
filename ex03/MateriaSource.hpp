#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		const static int	_maxPages = 4;
		AMateria*			_materias[_maxPages];
		void 				forgetMaterias();

	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& copy);
		MateriaSource& operator=(const MateriaSource& copy);

		void		learnMateria(AMateria*) override;
		AMateria*	createMateria(std::string const &) override;
		void		displayMaterias(void);
};	