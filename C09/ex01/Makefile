# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 10:52:43 by aperin            #+#    #+#              #
#    Updated: 2022/09/20 15:07:42 by aperin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRC		= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c \
			srcs/ft_strlen.c srcs/ft_strcmp.c
OBJ		= $(SRC:.c=.o)
INC		= inlcudes
RM		= rm -f

.c.o:
	gcc -Wall -Wextra -Werror -c -I INC $< -o $(<:.c=.o)

$(NAME):
	$(OBJ)
	ar -rc $(NAME) $(OBJ)

all:
	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	clean
	$(RM) $(NAME)

re:
	fclean
	all