FILES = srcs/main.c \
	srcs/parsing_error.c \
	srcs/algo.c \
	srcs/utils.c \
	srcs/stack_cmd.c \
	srcs/exo_cmd.c \
	srcs/exo2_cmd.c \
	srcs/exo3_cmd.c \
	
	
	
	
OBJETS = $(FILES:.c=.o)

CFLAGS = -Wall -Werror -Wextra -Iincludes -Ilibft/libft.h -g3

CC = cc

NAME = push_swap

LIB_PATH = libft/libft.a

FT_PRINTF_PATH = libft/ft_printf/libftprintf.a

all: $(NAME)

make_lib:
	make -C libft

$(NAME): make_lib $(OBJETS)
	$(CC) $(CFLAGS) $(OBJETS) $(LIB_PATH) $(FT_PRINTF_PATH) -o $(NAME)

clean:
	make clean -C libft
	rm -rf $(OBJETS)

fclean: clean
	make fclean -C libft
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
