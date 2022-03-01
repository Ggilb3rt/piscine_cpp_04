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
    AAnimal*      list[qt_animals];

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
    // Can't compile
    // AAnimal* pouet = new AAnimal();
    // AAnimal roger;

    make_list(10);

    std::cout << std::endl << "Can we access AAnimal sound ?" << std::endl;
    AAnimal* polo = new Dog();
    polo->AAnimal::makeSound();
    delete polo;

    return 0;
}