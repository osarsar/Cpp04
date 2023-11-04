SRCS =  main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongCat.cpp \
		WrongAnimal.cpp \
		
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Animal

OBJ =  $(SRCS:.cpp=.o)

%.o : %.cpp ClapTrap.hpp
	@c++ $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	@c++ $(FLAGS) $(OBJ) -o $@

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all