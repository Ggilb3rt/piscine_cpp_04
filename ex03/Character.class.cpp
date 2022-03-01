#include "AMateria.class.hpp"
#include "Character.class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character() : _name("Anonymous")
{
	std::cout << "Create Character " << this->getName() << std::endl;
	for (int i = 0; i < MAX_ITEMS; i++)
		this->_bag[i] = NULL;
	return ;
}

Character::Character( std::string const name) : _name(name)
{
	std::cout << "Create Character " << this->getName() << std::endl;
	for (int i = 0; i < MAX_ITEMS; i++)
		this->_bag[i] = NULL;
	return ;
}

Character::Character( const Character & src )
{
	*this = src;
	std::cout << "Create Character from copy " << this->getName() << std::endl;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	std::cout << "Kill Character " << this->getName() << std::endl;
	for (int i = 0; i < MAX_ITEMS; i++)
		this->_bag[i] = NULL;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		// lors d'une copie les Materias du Character doivent etre delete avant que les nouvelles ne les remplacent
		for (int i = 0; i < MAX_ITEMS; i++)
			this->_bag[i] = rhs._bag[i];
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	o << "Name = " << i.getName();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void				Character::equip( AMateria* m )
{
	for (int i = 0; i < MAX_ITEMS; i++)
	{
		if (this->_bag[i] == NULL)
		{
			this->_bag[i] = m;
			break;
		}
	}
}

void				Character::unequip( int idx )
{
	if ( idx < MAX_ITEMS && idx >= 0)
		this->_bag[idx] = NULL;
}

void				Character::use( int idx, ICharacter& target )
{
	if ( idx < MAX_ITEMS && idx >= 0)
	{
		if (this->_bag[idx] != NULL)
			this->_bag[idx]->use( target );
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string const & Character::getName( void ) const
{
	return this->_name;
}


/* ************************************************************************** */