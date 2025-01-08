#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "TEST 1" << std::endl;
	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl << "TEST 2" << std::endl;
	WrongAnimal* meta1 = new WrongAnimal();
	Animal* j1 = new Dog();
	WrongAnimal* i1 = new WrongCat();

	std::cout << j1->getType() << " " << std::endl;
	std::cout << i1->getType() << " " << std::endl;
	i1->makeSound();
	j1->makeSound();
	meta1->makeSound();
	delete meta1;
	delete j1;
	delete i1;

	std::cout << std::endl << "TEST 3" << std::endl;
	

}
