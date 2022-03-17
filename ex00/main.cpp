#include <iostream>
#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"

int main ( void )
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    Animal  unicorn;
    Dog     dogo;
    Cat     CCC;

    dogo.makeSound();
    CCC.makeSound();
    unicorn.makeSound();

    std::cout << std::endl << "----------From copy------------" << std::endl;
    Dog     dogoCpy(dogo);
    Animal* CCCCpy = new Cat(CCC);

    CCCCpy->makeSound();
    dogoCpy.makeSound();
    delete CCCCpy;


    std::cout << std::endl << "----------Wrong Animal------------" << std::endl;
    const WrongAnimal*  poney = new WrongCat();

    std::cout << poney->getType() << " " << std::endl;
    poney->makeSound();
    delete poney;

    std::cout << std::endl << std::endl;
    return 0;
}