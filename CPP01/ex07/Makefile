SRC =	main.cpp\

NAME = replace
CC = clang++
OBJ = ${SRC:.cpp=.o}
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

$(NAME) :	$(OBJ)
				$(CC) $(CPPFLAGS) -o $@ $(OBJ)

all :		${NAME}

%.o: %.cpp
			@$(CC) $(CPPFLAGS) -o $@ -c $<

clean :
		rm -f $(OBJ)

fclean :     clean
			rm -f ${NAME} *.replace

re : fclean all

.PHONY : all clean fclean re