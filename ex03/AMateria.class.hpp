#ifndef AMateria_CLASS_HPP
# define AMateria_CLASS_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

	public:

		AMateria( void );
		AMateria( AMateria const & src );
		AMateria( std::string const & type );
		virtual ~AMateria( void );

		AMateria &		operator=( AMateria const & rhs );

		std::string const & getType( void ) const;

		virtual AMateria*	clone( void ) const = 0;
		virtual void		use( ICharacter& target );

};

#endif /* ********************************************************* AMateria_H */