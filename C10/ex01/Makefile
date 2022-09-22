NAME	= ft_cat
SRCS	= main.c ft_cat.c ft_str.c

$(NAME):
	gcc -Wall -Wextra -Werror $(SRCS) -o $(NAME)

all:	$(NAME)

clean:
	rm -f $(NAME).exe

fclean:	clean

re:	clean all

.PHONY:	all re clean fclean