LIGHT_GREEN = \033[0;38;5;121m
LIGHT_RED = \033[0;31;5;110m
FLASH_GREEN = \033[33;32m
WHITE_BOLD = \033[37m
GREY = \033[3;90m
ORANGE = \033[3;91m
YELLOW = \033[0;33m

SRCS		=	main.cpp

NAME		=	test

RM			=	rm -rf

FLAGS		=	-Wall -Werror -Wextra #-fsanitize=address

all:		$(NAME) $(OBJ_PATH)

$(NAME):	$(OBJ) Makefile
	@clang++ $(FLAGS) $(SRCS) -o $(NAME)
	@printf "	\033[2K\r$(DARK_BLUE)$(NAME)\t: $(LIGHT_GREEN)Updated\n\033[0m"

clean:
	@${RM} *.o

$(OBJ_PATH)%.o: %.cpp Makefile
	@printf "\033[2K\r$(LIGHT_RED)Compiling...	\033[37m$<\033[36m \033[0m"
	@clang++ $(FLAGS) -o $@ -c $< -I $(HEADER)

fclean: clean
	@${RM} ${NAME}

re:
	@$(MAKE) fclean
	@$(MAKE) all