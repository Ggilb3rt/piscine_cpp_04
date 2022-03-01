#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat( void ) : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "Create " << this->type << std::endl;
	return ;
}

WrongCat::WrongCat( const WrongCat & src )
{
	*this = src;
	std::cout << "Create from copy " << this->type << std::endl;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat( void )
{
	std::cout << "Destroye " << this->type << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	WrongCat::makeSound( void ) const
{
	std::cout << "Miaou !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */