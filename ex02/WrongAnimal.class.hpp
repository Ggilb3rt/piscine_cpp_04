#ifndef WRONG_ANIMAL_CLASS_HPP
# define WRONG_ANIMAL_CLASS_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
		std::string 		type;

	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal( void );


		std::string			getType( void ) const;
		void				makeSound( void ) const;

		WrongAnimal &			operator=( WrongAnimal const & rhs );
};

#endif /* ********************************************************** WrongAnimal_H */