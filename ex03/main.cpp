#include <iostream>
#include "AMateria.class.hpp"
#include "ICharacter.hpp"
#include "Character.class.hpp"
#include "Ice.class.hpp"

int main ( void )
{
    // AMateria         nope;
    Ice                 snow;
    AMateria*           more = snow.clone();

    std::cout << snow << " | " << more->getType() << " \\ " << more << std::endl;
    
    delete more;
    return 0;
}