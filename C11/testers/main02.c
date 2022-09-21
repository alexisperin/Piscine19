#include <stdlib.h>
#include <stdio.h>

int	ft_any(char **tab, int(*f)(char*));

int ft_f(char *str)
{
	if (str[0] == 'a')
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
	tab[4] = NULL;
	printf("%d\n", ft_any(tab, &ft_f));
}