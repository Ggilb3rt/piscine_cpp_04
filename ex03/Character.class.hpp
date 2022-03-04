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

		virtual std::string const & getName( void ) const;
		virtual void	equip( AMateria* m );
		virtual void	unequip( int idx );
		virtual void	use( int idx, ICharacter& target );

		void			printBag( void ) const;
		AMateria*		getBagItemAddr( int idx ) const;

	protected:
		std::string		_name;
		AMateria*		_bag[MAX_ITEMS];

};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif /* ******************************************************* CHARACTER_H */