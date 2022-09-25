# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dopeyrat <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/15 16:23:03 by dopeyrat          #+#    #+#              #
#    Updated: 2022/09/25 11:34:57 by dopeyrat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= parse.c utils.c dict_utils.c main.c cut_nbr.c print_num.c utils2.c print_num2.c

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

all:		${NAME}

${NAME}:	${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY:	re clean fclean all
