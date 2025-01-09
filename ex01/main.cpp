#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "TEST 1" << std::endl;
	Animal*	pets[16];

	for (int i = 0; i < 16; i++)
	{
		if (i % 2 == 0)
			pets[i] = new Cat();
		else
			pets[i] = new Dog();
	}
	for (int i = 0; i < 16; i++)
	{
		pets[i]->makeSound();
	}
	for (int i = 0; i < 16; i++)
	{
		delete pets[i];
	}

	std::cout << "TEST 2" << std::endl;
	Dog Fifi;
	Dog Fafa(Fifi);
	Dog Fufu = Fifi;
	
	std::cout << "Fifi's idea: " << Fifi.getIdea(1) << std::endl;
	Fifi.setIdea(1, "I like you!");
	std::cout << "Fifi's new idea: " << Fifi.getIdea(1) << std::endl;

	std::cout << "Fafa's idea: " << Fafa.getIdea(1) << std::endl;
	std::cout << "Fufu's idea: " << Fufu.getIdea(1) << std::endl;

}
