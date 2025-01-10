#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Hello, this is brain." << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "Hmm...";
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
		for (int i = 0; i < 100; i++)
			this->ideas[i] = source.ideas[i];
		std::cout << "A brain is doing an operation. Brain = brain. " << std::endl;
	}
	return (*this);
};

const std::string	Brain::getIdea(int i) const
{
	if (i >= 0 && i < 99)
		return this->ideas[i];
	else
	{
		const std::string error = "No idea (only 0-99 ideas in the brain)";
		return (error);
	}
};

void	Brain::setIdea(int i, std::string newIdea)
{
	if (i >= 0 && i < 99)
		this->ideas[i] = newIdea;
};