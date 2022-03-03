#include "AMateria.class.hpp"
#include "Ice.class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice( void ) : AMateria("ice")
{
	if (DEBUG)
		std::cout << "Create " << this->getType() << std::endl;
	return ;
}

Ice::Ice( const Ice & src )
{
	*this = src;
	if (DEBUG)
		std::cout << "Create from copy " << this->getType() << std::endl;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
	if (DEBUG)
		std::cout << "Destoye " << this->getType() << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &				Ice::operator=( Ice const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Ice const & i )
{
	o << "Type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
AMateria*				Ice::clone( void ) const
{
	if (DEBUG)
		std::cout << "cloning " << this->getType() << "...." << std::endl;
	AMateria*	more_ice = new Ice();
	return more_ice;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */