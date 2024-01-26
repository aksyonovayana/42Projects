NAME = pipex

CC = gcc

CFLAGS = -Wall -Wextra -Werror -fsanitize=address

RM = rm -rf

SRCS = pipex.c\
			utils.c\
				libft.a\

SRCS_BONUS = pipex_bonus.c\
				utils_bonus.c\
					libft.c\

$(NAME) :
		make all -C libft
		gcc $(CFLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

flean: clean
		$(RM) $(NAME)
		make fclean -C libft

clean: 
		$(RM) $(NAME)
		make clean -C libft

re: fclean all
s
bonus: clean
		make all -C libft
		gcc $(CFLAGS) $(SRCS_BONUS) -o $(NAME)