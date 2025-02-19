#pragma once
#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain* _catBrain;

	public: 
		Cat();
		~Cat();
		Cat(const Cat& source);
		Cat& operator=(const Cat& source);
		
		void 		makeSound() override;
		std::string	getType() const;

		const std::string	getIdea(int i) const;
		void				setIdea(int i, std::string newIdea);
};