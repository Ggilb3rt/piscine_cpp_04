#Coucou

NAME = polymorphisme
FLAGS = -Wall -Wextra -Werror 
STD = -std=c++98
COMPIL = c++
SRC = main.cpp Animal.class.cpp Dog.class.cpp Cat.class.cpp WrongAnimal.class.cpp WrongCat.class.cpp \
		Brain.class.cpp
OBJ = $(SRC:.cpp=.o)

.PHONY : all re fclean clean

%.o: %.cpp
	$(COMPIL) $(FLAGS) $(STD) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPIL) $(FLAGS) $(STD) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test : all
	valgrind ./$(NAME)