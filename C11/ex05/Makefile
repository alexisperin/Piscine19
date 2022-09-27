# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 14:02:06 by aperin            #+#    #+#              #
#    Updated: 2022/09/22 14:15:32 by aperin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= do-op
SRCS	= ft_atoi.c ft_putnbr.c ft_str.c main.c operations.c
OBJS	= $(SRCS:.c=.o)

%.o : %.c
	gcc -Wall -Wextra -Werror -c -I./includes $< -o ${<:.c=.o}

$(NAME):	$(OBJS)
	gcc -Wall -Wextra -Werror $(OBJS) -o $(NAME)

all:	$(NAME)

clean:	
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
