# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperin <aperin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 11:00:50 by aperin            #+#    #+#              #
#    Updated: 2022/09/28 14:07:24 by aperin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_tail
SRCS	= main.c ft_tail.c display.c ft_utils.c
OBJS	= $(SRCS:.c=.o)

%.o : %.c
	gcc -Wall -Wextra -Werror -c $< -o ${<:.c=.o}

$(NAME):	$(OBJS)
	gcc -Wall -Wextra -Werror $(OBJS) -o $(NAME)

all:	$(NAME)

clean:	
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re