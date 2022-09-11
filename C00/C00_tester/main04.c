#include <stdio.h>

void ft_is_negative();

int	main()
{
	int n = -4;
	
	printf("Expected:\n");
	printf("NNNNPPPPP\n");
	printf("Your result:\n");

	while(n <= 4)
	{
		ft_is_negative(n);
		n++;
	}

	return (0);
}
