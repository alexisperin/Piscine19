# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 15:00:16 by aperin            #+#    #+#              #
#    Updated: 2022/09/22 15:03:31 by aperin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= display_file
SRCS	= main.c display_file.c ft_str.c

$(NAME):
	gcc -Wall -Wextra -Werror $(SRCS) -o $(NAME)

all:	$(NAME)

clean:
	rm -f $(NAME)

fclean:	clean

re:	clean all

.PHONY:	all re clean fclean
