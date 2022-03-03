#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

# include <iostream>
# include <string>
# include "AMateria.class.hpp"

class Cure : public AMateria
{

	public:

		Cure( void );
		Cure( Cure const & src );
		virtual ~Cure( void );

		Cure &		operator=( Cure const & rhs );

		virtual AMateria*	clone( void ) const;

	private:

};

std::ostream &			operator<<( std::ostream & o, Cure const & i );

#endif /* ************************************************************* Cure_H */