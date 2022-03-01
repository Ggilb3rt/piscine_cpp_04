#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include <iostream>
# include <string>
# include "Animal.class.hpp"
# include "Brain.class.hpp"

class Cat : public AAnimal
{

	public:

		Cat( void );
		Cat( Cat const & src );
		virtual ~Cat( void );

		virtual void		makeSound( void ) const;

		Cat &				operator=( Cat const & rhs );

	private:
		Brain*				CatBrain;
};

std::ostream &			operator<<( std::ostream & o, Cat const & i );

#endif /* ************************************************************* Cat_H */