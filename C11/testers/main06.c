#include <stdio.h>
#include <stdlib.h>

void	ft_sort_string_tab(char **tab);

int main (void)
{
	char *tab[5];
	int i;

	tab[0] = "54321";
	tab[1] = "654";
	tab[2] = "131";
	tab[3] = "13";
	tab[4] = NULL;
	i = 0;
	ft_sort_string_tab(tab);
	while (i < 4)
	{
		printf("%s\n", tab[i]);
		i++;
	}
}