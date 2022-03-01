#include "Animal.class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal() : type("Unknow AAnimal")
{
	std::cout << "Create AAnimal : " << this->type << std::endl;
	return ;
}

AAnimal::AAnimal( const AAnimal & src )
{
	*this = src;
	std::cout << "Create AAnimal from copy :" << this->type << std::endl;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal()
{
	std::cout << "Destroye AAnimal : " << this->type << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal &				AAnimal::operator=( AAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AAnimal const & i )
{
	o << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	AAnimal::makeSound( void ) const
{
	std::cout << "..." << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string	AAnimal::getType( void ) const
{
	return (this->type);
}

/* ************************************************************************** */