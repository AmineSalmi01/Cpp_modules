CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook
RM = rm -rf

SRC = phonebook.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean