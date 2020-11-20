NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.
OBJS = $(SRC:.c=.o)
SRC = ft_atoi.c					\
			ft_memcpy.c			\
			ft_putstr.c			\
			ft_strequ.c			\
			ft_strnstr.c		\
			ft_bzero.c			\
			ft_memset.c			\
			ft_putstr_fd.c		\
			ft_strlcat.c		\
			ft_strrchr.c		\
			ft_isalnum.c		\
			ft_putchar.c		\
			ft_strcat.c			\
			ft_strlen.c			\
			ft_strstr.c			\
			ft_isalpha.c		\
			ft_putchar_fd.c		\
			ft_strchr.c			\
			ft_strncat.c		\
			ft_strtrim.c		\
			ft_isascii.c		\
			ft_putendl.c		\
			ft_strclr.c			\
			ft_strncmp.c		\
			ft_tolower.c		\
			ft_isdigit.c		\
			ft_putendl_fd.c		\
			ft_strcmp.c			\
			ft_strncpy.c		\
			ft_toupper.c		\
			ft_isprint.c		\
			ft_putnbr.c			\
			ft_strcpy.c			\
			ft_strnequ.c		\
			ft_memccpy.c		\
			ft_putnbr_fd.c		\
			ft_strdup.c			\
			ft_strnew.c			\
			ft_memmove.c

$(NAME): $(OBJS)
	@$(CC) -o $(NAME) $(SRC) $(CFLAGS)
	@ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY :	all ${NAME} clean fclean re
