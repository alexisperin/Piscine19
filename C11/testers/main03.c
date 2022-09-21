#include <stdlib.h>
#include <stdio.h>

int	ft_count_if(char **tab, int length, int(*f)(char*));

int ft_f(char *str)
{
	if (str[0] == 'a' || str[0] == 'y')
		return (1);
	return (0);
}

int main (void)
{
	char *tab[5];

	tab[0] = "Hello";
	tab[1] = "how";
	tab[2] = "are";
	tab[3] = "you";
	tab[4] = "?";
	printf("%d\n", ft_count_if(tab, 5, &ft_f));
}