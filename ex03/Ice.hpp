#pragma once
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
	protected:
		std::string _type;
	public:
		Ice();
		~Ice();
		Ice(const Ice& copy);
		Ice& operator=(const Ice& copy);
};