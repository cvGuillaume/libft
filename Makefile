# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcornet- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/24 14:55:31 by gcornet-          #+#    #+#              #
#    Updated: 2020/11/25 17:42:07 by gcornet-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_bzero.c		\
		ft_memcpy.c		\
		ft_memccpy.c	\
		ft_memmove.c	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strlen.c		\
		ft_strdup.c		\
		ft_strlcat.c	\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_strnstr.c	\
		ft_strncmp.c	\
		ft_atoi.c		\
		ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_calloc.c		\
		ft_strlcpy.c	\
		ft_strmapi.c	\
		ft_substr.c		\
		ft_strjoin.c	\
		ft_strtrim.c	\
		ft_split.c		\
		ft_itoa.c		\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\
		ft_memset.c		\
		ft_isprint.c

BONUS =	ft_lstnew.c			\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstadd_front.c	\
		ft_lstadd_back.c	\
		ft_lstiter.c		\
		ft_lstdelone.c		\
		ft_lstclear.c


BONUS_OBJS		= $(BONUS:.c=.o)
OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= @rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus