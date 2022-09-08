#include <unistd.h>

void print_combn_recursive(int n, char previous)
{
	if(n > 0)
	{
		char current;
		char max = '9' - n + 1;
	
		for(current = previous + 1; current <= max; current++)
		{
			write(1, &previous, 1);
			print_combn_recursive(n - 1, current);
		}
	}
	else
	{
		char comma[2] = {',', ' '};
		write(1, &previous, 1);
		write(1, &comma, 2);
	}
}

void ft_print_combn(int n)
{
	char max = '9' - n + 1;
	for(char digit = '0'; digit <= max; digit++)
	{
		print_combn_recursive(n - 1, digit);
	}
}