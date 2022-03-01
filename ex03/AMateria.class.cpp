#include "AMateria.class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
{
	return ;
}

AMateria::AMateria( const AMateria & src )
{
	*this = src;
	return ;
}

AMateria::AMateria( std::string const & type ) : _type(type)
{
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void				AMateria::use( ICharacter & target )
{
	if (this->getType() == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl; 	
	return ;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string const &	AMateria::getType( void ) const
{
	return this->_type;
}


/* ************************************************************************** */