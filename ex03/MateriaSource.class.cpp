#include "MateriaSource.class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource( void )
{
	for (int i = 0; i < MAX_ITEMS; i++)
		this->_brain[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource( void )
{
	// free all materias in brain
	for (int i = 0; i < MAX_ITEMS; i++)
		if (this->_brain[i] != NULL)
			delete this->_brain[i];
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i < MAX_ITEMS; i++)
		{
			if (rhs._brain[i] != NULL)
				this->_brain[i] = rhs._brain[i]->clone();
		}
		// loop all materias in brain ( create new to deep copy )
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void						MateriaSource::learnMateria( AMateria* m )
{
	for (int i = 0; i < MAX_ITEMS; i++)
	{
		if (this->_brain[i] == NULL)
		{
			this->_brain[i] = m;
			return ;
		}
	}
	std::cout << "Can't learn " << m->getType() << std::endl;
}

AMateria*					MateriaSource::createMateria( std::string const & type )
{
	int	i = 0;

	while (type != this->_brain[i]->getType() && i < MAX_ITEMS)
		i++;
	if (this->_brain[i]->getType() == type)
		return this->_brain[i]->clone();
	else
		return 0;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */