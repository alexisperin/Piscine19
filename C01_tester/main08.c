#include <stdio.h>

int ft_sort_int_tab(int *tab, int size);

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
	int tab1[] = {5, 1, 3, 6, 34, 7, 9, 8};
	int sort_tab1[] = {1, 3, 5, 6, 7, 8, 9, 34};
	int tab2[] = {-42, 12, 19, 5, -21, 4, 70, 68, 9};
	int sort_tab2[] = {-42, -21, 4, 5, 9, 12, 19, 68, 70};
	int tab3[] = {-42, 12, 12, 5, -21, 4, 70, -21, 9};
	int sort_tab3[] = {-42, -21, -21, 4, 5, 9, 12, 12, 70};

	printf("Expected:\n");
	print_tab(sort_tab1, 8);
	printf("\nResult:\n");
	ft_sort_int_tab(tab1, 8);
	print_tab(tab1, 8);
	printf("\n\nExpected:\n");
	print_tab(sort_tab2, 9);
	printf("\nResult:\n");
	ft_sort_int_tab(tab2, 9);
	print_tab(tab2, 9);
	printf("\n\nExpected:\n");
	print_tab(sort_tab3, 9);
	printf("\nResult:\n");
	ft_sort_int_tab(tab3, 9);
	print_tab(tab3, 9);
	printf("\n");
	return (0);
}
