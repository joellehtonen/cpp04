#pragma once
#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria(std::string const & type);
		AMateria();
		virtual ~AMateria();
		AMateria(const AMateria& copy);
		AMateria& operator=(const AMateria& copy);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};