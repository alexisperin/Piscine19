#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

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
	int *range;

	printf("%d: ", ft_ultimate_range(&range, -5, 5));
	print_tab(range, 10);
}