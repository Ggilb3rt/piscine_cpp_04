#include "Brain.class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain( void )
{
	std::cout << "Create brain with " << QT_IDEAS << " ideas" << std::endl;
	return ;
}

Brain::Brain( const Brain & src )
{
	*this = src;
	std::cout << "Create brain with " << QT_IDEAS << " ideas by copy" << std::endl;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain( void )
{
	std::cout << "Brain is too old" << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i < QT_IDEAS; i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */