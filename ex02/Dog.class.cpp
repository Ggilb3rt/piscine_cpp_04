#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Brain.class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog( void ) : AAnimal()
{
	this->type = "Dog";
	std::cout << "Create " << this->type << std::endl;
	dogBrain = new Brain;
	return ;
}

Dog::Dog( const Dog & src )
{
	*this = src;
	std::cout << "Create from copy " << this->type << std::endl;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog( void )
{
	delete dogBrain;
	std::cout << "Destroye " << this->type << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
		this->dogBrain = new Brain;
		*(this->dogBrain) = *(rhs.dogBrain);
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Dog::makeSound( void ) const
{
	std::cout << "Ouaf !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */