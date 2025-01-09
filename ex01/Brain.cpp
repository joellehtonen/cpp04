#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Hello, this is brain." << std::endl;
};

Brain::~Brain() {
	std::cout << "The brain shrinks into non-existence!" << std::endl;
};

Brain::Brain(const Brain& copy) {
	*this = copy;
	std::cout << "A brain dublicates itself from another brain. Interesting..." << std::endl;
};

Brain& Brain::operator=(const Brain& source) {
	if (this != &source)
	{
		*this = source;
		std::cout << "A brain is doing an operation. Brain = brain. " << std::endl;
	}
	return (*this);
};