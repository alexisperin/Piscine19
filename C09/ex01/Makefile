# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 10:52:43 by aperin            #+#    #+#              #
#    Updated: 2022/09/22 11:56:13 by aperin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c \
			srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	= $(SRCS:.c=.o)
NAME	= libft.a

%.o : %.c
	gcc -Wall -Wextra -Werror -c -I./includes $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rc $@ $^

all:	${NAME}

clean:
	rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
