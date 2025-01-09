#pragma once
#include <string>
#include <iostream>

class Brain {
	public: 
		Brain();
		~Brain();
		Brain(const Brain& copy);
		Brain& operator=(const Brain& source);

		std::string ideas[100];
};