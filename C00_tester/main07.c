#include <stdio.h>

void ft_putnbr(int nb);

int main()
{
	while(1)
	{
		int nb = 0;
		printf("Enter a number: \n");
		scanf("%d", &nb);
		ft_putnbr(nb);
		printf("\n");
		printf("\n");
	}

	return 0;
}