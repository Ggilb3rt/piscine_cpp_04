#include "Animal.class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() : type("Unknow Animal")
{
	std::cout << "Create Animal : " << this->type << std::endl;
	return ;
}

Animal::Animal( const Animal & src )
{
	*this = src;
	std::cout << "Create Animal from copy :" << this->type << std::endl;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Destroye Animal : " << this->type << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	o << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Animal::makeSound( void ) const
{
	std::cout << "..." << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string	Animal::getType( void ) const
{
	return (this->type);
}

/* ************************************************************************** */