#include "Animal.class.hpp"
#include "Cat.class.hpp"
#include "Brain.class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat( void ) : AAnimal()
{
	this->type = "Cat";
	std::cout << "Create " << this->type << std::endl;
	CatBrain = new Brain;
	return ;
}

Cat::Cat( const Cat & src )
{
	*this = src;
	std::cout << "Create from copy " << this->type << std::endl;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat( void )
{
	delete CatBrain;
	std::cout << "Destroye " << this->type << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
		this->CatBrain = new Brain;
		*(this->CatBrain) = *(rhs.CatBrain);
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Cat::makeSound( void ) const
{
	std::cout << "Miaou !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */