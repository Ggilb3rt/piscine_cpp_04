#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

# include <iostream>
# include <string>
# include "AMateria.class.hpp"

class Ice : public AMateria
{

	public:

		Ice( void );
		Ice( Ice const & src );
		virtual ~Ice( void );

		Ice &		operator=( Ice const & rhs );

		virtual AMateria*	clone( void ) const;

	private:

};

std::ostream &			operator<<( std::ostream & o, Ice const & i );

#endif /* ************************************************************* ICE_H */