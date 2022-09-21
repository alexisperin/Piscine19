#include <stdio.h>

int *ft_map(int *tab, int length, int(*f)(int));

int	times2(int nb)
{
	return (2 * nb);
}

int main(void)
{
	int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *new_tab;
	int i = 0;

	new_tab = ft_map(tab, 10, &times2);
	while (i < 10)
	{
		printf("%d ", new_tab[i]);
		i++;
	}
}