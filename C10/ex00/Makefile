# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperin <aperin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 15:00:16 by aperin            #+#    #+#              #
#    Updated: 2022/09/28 10:59:00 by aperin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= display_file
SRCS	= main.c display_file.c ft_str.c
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
