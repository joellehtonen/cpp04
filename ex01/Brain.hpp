#pragma once
#include <string>
#include <iostream>

class Brain {
	private:
		std::string ideas[100];

	public: 
		Brain();
		~Brain();
		Brain(const Brain& source);
		Brain& operator=(const Brain& source);

		const std::string	getIdea(int i) const;
		void				setIdea(int i, std::string newIdea);
};