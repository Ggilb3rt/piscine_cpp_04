#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string 		type;

	public:

		Animal();
		Animal( Animal const & src );
		virtual ~Animal( void );


		std::string			getType( void ) const;
		virtual void		makeSound( void ) const;

		Animal &			operator=( Animal const & rhs );
};

#endif /* ********************************************************** ANIMAL_H */