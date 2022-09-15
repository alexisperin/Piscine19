#include <stdio.h>

void ft_print_combn(int nb);

int main()
{
	while(1)
	{
		int n = 0;
		printf("Enter a number: \n");
		scanf("%d", &n);
		ft_print_combn(n);
		printf("\n");
		printf("\n");
	}

	return 0;
}