#pragma once
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		std::string _type;

	public:
		Cure();
		~Cure();
		Cure(const Cure& copy);
		Cure& operator=(const Cure& copy);

		AMateria* clone() const;
};