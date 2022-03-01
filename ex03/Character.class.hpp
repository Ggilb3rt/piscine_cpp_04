#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include <iostream>
# include "AMateria.class.hpp"
# include "ICharacter.hpp"

#define MAX_ITEMS 4

class Character : public ICharacter
{

	public:

		Character( void );
		Character( std::string const name);
		Character( Character const & src );
		virtual ~Character( void );

		Character &		operator=( Character const & rhs );

		std::string const & getName( void ) const;
		void	equip( AMateria* m );
		void	unequip( int idx );
		void	use( int idx, ICharacter& target );

	protected:
		std::string		_name;
		AMateria*		_bag[MAX_ITEMS];

};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif /* ******************************************************* CHARACTER_H */