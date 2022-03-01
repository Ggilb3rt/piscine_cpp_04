#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include <iostream>
# include <string>

class AAnimal
{
	protected:
		std::string 		type;

	public:

		AAnimal();
		AAnimal( AAnimal const & src );
		virtual ~AAnimal( void );


		std::string			getType( void ) const;
		virtual void		makeSound( void ) const = 0;

		AAnimal &			operator=( AAnimal const & rhs );
};

#endif /* ********************************************************** ANIMAL_H */