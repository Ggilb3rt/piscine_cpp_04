#include <iostream>
#include "ICharacter.hpp"
#include "IMaterialSource.hpp"
#include "AMateria.class.hpp"
#include "MateriaSource.class.hpp"
#include "Character.class.hpp"
#include "Ice.class.hpp"
#include "Cure.class.hpp"


void        subject_test()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());               // create leak
    src->learnMateria(new Cure());              // create leak

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
}

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
    std::cout << snow << "\\" << &snow << " | " << philosophaleStone << " | clone "
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
   subject_test();

    std::cout << std::endl << "----------------- Deep copy and MateriaSource tests ------------------" << std::endl;
    Character*      bibou = new Character("bibou");
    MateriaSource   earth;
    AMateria*       ice_cube = new Ice();
    AMateria*       pad = new Cure();

    earth.learnMateria(NULL);
    earth.learnMateria(pad);
    earth.learnMateria(ice_cube);
    earth.learnMateria(ice_cube);
    earth.learnMateria(pad);
    earth.learnMateria(ice_cube);
    delete ice_cube;
    delete pad;

    bibou->equip(earth.createMateria("prout"));
    bibou->equip(earth.createMateria("ice"));
    bibou->equip(earth.createMateria("cure"));
    bibou->equip(earth.createMateria("cure"));

    AMateria* onfloor = bibou->getBagItemAddr(1);
    bibou->unequip(1);
    
    Character      doppelganger(*bibou);
    doppelganger.equip(earth.createMateria("cure"));
    
    bibou->printBag();
    delete bibou;
    doppelganger.printBag();


    std::cout << std::endl << "MateriaSources contents" << std::endl;
    MateriaSource   mars(earth);
    earth.printBrain();
    mars.printBrain();

    delete onfloor;
    return 0;
}

// equip MateriaSource cree la materia
// unequi ne la delete pas (il faut garder son pointeur quelque part)
