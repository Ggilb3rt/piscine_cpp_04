#include <iostream>
#include "ICharacter.hpp"
#include "IMaterialSource.hpp"
#include "AMateria.class.hpp"
#include "MateriaSource.class.hpp"
#include "Character.class.hpp"
#include "Ice.class.hpp"
#include "Cure.class.hpp"

int main ( void )
{
    // AMateria         nope;
    Ice                 snow;
    AMateria*           more = snow.clone();
    Character           roger("Roger");
    Character           maurice("Maurice");
    Character*          hugette = new Character("Hugette");
    Cure                philosophaleStone;

    std::cout << std::endl << "----------------- Basic tests ------------------" << std::endl;
    std::cout << snow << " | " << philosophaleStone << " | "
        << more->getType() << " \\ " << more << std::endl
        << roger.getName() << std::endl;   
    roger.equip(&snow);
    roger.use(0, maurice);
    roger.unequip(1);
    roger.unequip(0);
    roger.use(1, maurice);
    std::cout << hugette->getName() << std::endl << std::endl;

    for(int i = 0; i < 6; i++)
    {
        std::cout << "Equipe " << i << std::endl;
        if (i % 2)
            maurice.equip(&philosophaleStone);
        else
            maurice.equip(&snow);
        std::cout << "Use " << i << std::endl;
        maurice.use(i, roger);
        maurice.use(i+1, roger);
        std::cout << std::endl;
    }
    maurice.printBag();
    for (int i = 0; i < 6; i++)
        maurice.unequip(i);
    maurice.printBag();

    delete hugette;
    delete more;


    std::cout << std::endl << "----------------- Subject tests ------------------" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;

    std::cout << std::endl << "----------------- Deep copy tests ------------------" << std::endl;
    Character*      bibou = new Character("bibou");
    MateriaSource   earth;

    earth.learnMateria(new Cure());
    earth.learnMateria(new Ice());
    earth.learnMateria(new Ice());
    earth.learnMateria(new Cure());
    // earth.learnMateria(new Ice()); //? creera un leaks car learnMateria ignore la materia quand il est plein. Devrai-je delete ou laisser l'utilisateur gerer ?

    bibou->equip(earth.createMateria("ice"));
    bibou->equip(earth.createMateria("cure"));
    bibou->equip(earth.createMateria("cure"));
    AMateria* onfloor = bibou->getBagItemAddr(1);
    bibou->unequip(1);
    Character      doppelganger(*bibou);
    doppelganger.equip(earth.createMateria("cure"));
    bibou->printBag();
    doppelganger.printBag();


    MateriaSource   mars(earth);
    earth.printBrain();
    mars.printBrain();

    delete onfloor;
    delete bibou;
    return 0;
}


// equip Materia cree la materia
// unequi ne la delete pas (il faut garder son pointeur quelque part)

// en cas de copie il faut delete les materias du premier avant de les creer dans le second
// comme si playerX donnait le contenu de son inventaire ??