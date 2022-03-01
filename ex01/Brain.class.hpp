#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

# include <iostream>
# include <string>

#define QT_IDEAS 100

class Brain
{

	public:
		Brain( void );
		Brain( Brain const & src );
		~Brain( void );

		Brain &		operator=( Brain const & rhs );

		std::string	ideas[QT_IDEAS];

	private:

};

#endif /* ***************************************************** BRAIN.CLASS_H */