#include "AMateria.class.hpp"
#include "Cure.class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure( void ) : AMateria("cure")
{
	if (DEBUG)
		std::cout << "Create " << this->getType() << std::endl;
	return ;
}

Cure::Cure( const Cure & src )
{
	*this = src;
	if (DEBUG)
		std::cout << "Create from copy " << this->getType() << std::endl;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
	if (DEBUG)
		std::cout << "Destoye " << this->getType() << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &				Cure::operator=( Cure const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cure const & i )
{
	o << "Type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
AMateria*				Cure::clone( void ) const
{
	if (DEBUG)
		std::cout << "cloning " << this->getType() << "...." << std::endl;
	AMateria*	more_Cure = new Cure();
	return more_Cure;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */