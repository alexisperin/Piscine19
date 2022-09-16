#include <stdio.h>

int *ft_range(int min, int max);

void print_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
	print_tab(ft_range(-5, 5), 10);
	print_tab(ft_range(5, 5), 0);
	print_tab(ft_range(5, -5), 0);
}