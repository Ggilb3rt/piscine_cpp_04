#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.class.hpp"

class WrongCat : public WrongAnimal
{

	public:

		WrongCat( void );
		WrongCat( WrongCat const & src );
		~WrongCat( void );

		void		makeSound( void ) const;

		WrongCat &				operator=( WrongCat const & rhs );
		
};

std::ostream &			operator<<( std::ostream & o, WrongCat const & i );

#endif /* ************************************************************* WrongCat_H */