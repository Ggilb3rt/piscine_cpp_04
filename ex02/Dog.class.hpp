#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include <iostream>
# include <string>
# include "Animal.class.hpp"
# include "Brain.class.hpp"

class Dog : public AAnimal
{

	public:
		Dog( void );
		Dog( Dog const & src );
		virtual ~Dog( void );

		virtual void		makeSound( void ) const;

		Dog &				operator=( Dog const & rhs );
	
	private:
		Brain*				dogBrain;
		
};

std::ostream &			operator<<( std::ostream & o, Dog const & i );

#endif /* ************************************************************* DOG_H */