#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "AMateria.class.hpp"
# include "IMaterialSource.hpp"

#define MAX_ITEMS 4

class MateriaSource: public IMateriaSource
{

	public:

		MateriaSource( void );
		MateriaSource( MateriaSource const & src );
		virtual ~MateriaSource();

		MateriaSource &		operator=( MateriaSource const & rhs );

        void		        learnMateria(AMateria* m);
        AMateria*   		createMateria(std::string const & type);
		
		void				printBrain( void ) const;

	private:
		AMateria*			_brain[MAX_ITEMS];
};

#endif /* *************************************************** MATERIASOURCE_H */