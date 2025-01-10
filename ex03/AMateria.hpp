#pragma once
#include <string>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria(std::string const & type);
		AMateria();
		~AMateria();
		AMateria(const AMateria& copy);
		AMateria& operator=(const AMateria& copy);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};