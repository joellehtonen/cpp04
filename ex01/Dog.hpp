#pragma once
#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain* _dogBrain;

	public: 
		Dog();
		~Dog();
		Dog(const Dog& copy);
		Dog& operator=(const Dog& source);
		
		void 				makeSound() override;
		std::string			getType() const;

		const std::string	getIdea(int i) const;
		void				setIdea(int i, std::string newIdea);
};