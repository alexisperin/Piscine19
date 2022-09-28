#include <stdio.h>
#include <stdlib.h>

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int main (void)
{
	char *tab[5];
	int i;

	tab[0] = "54321";
	tab[1] = "654";
	tab[2] = "1";
	tab[3] = "13";
	tab[4] = NULL;
	i = 0;
	ft_advanced_sort_string_tab(tab, &ft_strcmp);
	while (i < 4)
	{
		printf("%s\n", tab[i]);
		i++;
	}
}