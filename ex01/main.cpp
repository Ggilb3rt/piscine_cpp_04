#include <iostream>
#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"
#include "Brain.class.hpp"

void    make_list( const int qt_animals)
{
    std::cout << std::endl << "Creeons un tableau comme demande" << std::endl << std::endl;
    Animal*      list[qt_animals];

    for (int i = 0; i < qt_animals; i++)
    {
        std::cout << i << " : ";
        if (i % 2)
            list[i] = new Dog;
        else
            list[i] = new Cat();
    }
    std::cout << std::endl << "Sing !" << std::endl << std::endl;
    for (int i = 0; i < qt_animals; i++)
    {
        list[i]->makeSound();
    }
    std::cout << std::endl << std::endl << std::endl;
    for (int i = 0; i < qt_animals; i++)
    {
        std::cout << i << " : ";
        delete list[i];
    }
    std::cout << std::endl;
}


int main ( void )
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;

    
   make_list(10);


    std::cout << std::endl << "------- Moar test -------" << std::endl;

	std::cout << std::endl << "Toby : " << std::endl;
	const Animal *toby = new Dog();
	delete toby;

	std::cout << std::endl << "Miaouss : " << std::endl;
	const Animal *miaouss = new Cat();
	delete miaouss;

	std::cout << std::endl << "Rex : " << std::endl;
	const Dog rex;

    std::cout << std::endl << "------- Copy test -------" << std::endl;
	std::cout << std::endl << "Anonymous : " << std::endl;
	const Animal *anonymous = new Dog(rex);
	delete anonymous;

    std::cout << std::endl << "Create and Copy Roger : " << std::endl;
    Dog   *roger = new Dog();
    Dog   *rogerCpy = new Dog(*roger);

    delete roger;
    rogerCpy->makeSound();
    delete rogerCpy;
    return 0;
}