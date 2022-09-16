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
	int *range1;
	int *range2;
	int *range3;

	printf("%d: ", ft_ultimate_range(&range1, -5, 5));
	print_tab(range1, 10);
	printf("%d: ", ft_ultimate_range(&range2, 5, 5));
	print_tab(range2, 0);
	printf("%d: ", ft_ultimate_range(&range3, 5, -5));
	print_tab(range2, 0);
}