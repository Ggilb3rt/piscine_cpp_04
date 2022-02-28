#include "WrongAnimal.class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal() : type("Unknow WrongAnimal")
{
	std::cout << "Create WrongAnimal : " << this->type << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	*this = src;
	std::cout << "Create WrongAnimal from copy :" << this->type << std::endl;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destroye WrongAnimal : " << this->type << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i )
{
	o << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	WrongAnimal::makeSound( void ) const
{
	std::cout << "..." << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}

/* ************************************************************************** */