#include <stdio.h>

int ft_rev_int_tab(int *tab, int size);

void print_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}

int main(void)
{
	int tab1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int rev_tab1[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int tab2[] = {-42, 12, 19, 5, -21, 4, 70, 68, 9};
	int rev_tab2[] = {9, 68, 70, 4, -21, 5, 19, 12, -42};

	printf("Expected:\n");
	print_tab(rev_tab1, 10);
	printf("\nResult:\n");
	ft_rev_int_tab(tab1, 10);
	print_tab(tab1, 10);
	printf("\n\nExpected:\n");
	print_tab(rev_tab2, 9);
	printf("\nResult:\n");
	ft_rev_int_tab(tab2, 9);
	print_tab(tab2, 9);
	printf("\n");
	return (0);
}
