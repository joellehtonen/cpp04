#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "TEST 1" << std::endl;
	int	a = 8;
	Animal*	pets[a];

	for (int i = 0; i < a; i++)
	{
		if (i % 2 == 0)
			pets[i] = new Cat();
		else
			pets[i] = new Dog();
	}
	for (int i = 0; i < a; i++)
	{
		pets[i]->makeSound();
	}
	for (int i = 0; i < a; i++)
	{
		delete pets[i];
	}

	std::cout << "TEST 2" << std::endl;
	Dog Fifi;
	Dog Fafa(Fifi);
	Dog Fufu;
	Fufu = Fifi;
	
	std::cout << "Fifi's idea #1: " << Fifi.getIdea(1) << std::endl;
	Fifi.setIdea(1, "I like you!");
	std::cout << "Fifi's new idea #1: " << Fifi.getIdea(1) << std::endl;

	std::cout << "Fafa's idea #1: " << Fafa.getIdea(1) << std::endl;
	std::cout << "Fufu's idea #1: " << Fufu.getIdea(1) << std::endl;
}
