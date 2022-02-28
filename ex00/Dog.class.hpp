#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include <iostream>
# include <string>
# include "Animal.class.hpp"

class Dog : public Animal
{

	public:

		Dog( void );
		Dog( Dog const & src );
		virtual ~Dog( void );

		virtual void		makeSound( void ) const;

		Dog &				operator=( Dog const & rhs );
		
};

std::ostream &			operator<<( std::ostream & o, Dog const & i );

#endif /* ************************************************************* DOG_H */