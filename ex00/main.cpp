#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "\nTEST 1" << std::endl;
	
	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();

	std::cout << j->getType() << " is here!" << std::endl;
	std::cout << i->getType() << " is also here." << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << "\nTEST 2" << std::endl;

	WrongAnimal* meta01 = new WrongAnimal();
	WrongAnimal* i01 = new WrongCat();

	std::cout << i01->getType() << " arrived, oh no!" << std::endl;
	i01->makeSound();
	meta01->makeSound();
	delete meta01;
	delete i01;

	std::cout << "\nTEST 3" << std::endl;

	Dog dogbert;
	std::cout << "Dogbert is a type of " << dogbert.getType() << std::endl;
	dogbert.makeSound();

	Dog doglas(dogbert);
	std::cout << "Doglas is a type of " << dogbert.getType() << std::endl;
	doglas.makeSound();

	Animal *doggie = new Dog();
	std::cout << "Doggie is a type of " << doggie->getType() << std::endl;
	doggie->makeSound();
	delete doggie;
}
