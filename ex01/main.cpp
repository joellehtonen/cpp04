#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	Animal *pets[16];

	for (int i = 0; i < 16; i++)
	{
		if (i % 2 == 0)
			pets[i] = new Cat();
		else
			pets[i] = new Dog();
	}
}
