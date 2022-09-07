#include <unistd.h>

void ft_print_numbers()
{
	char n = '0';

	while(n <= '9')
	{
		write(1, &n, 1);
		n++;
	}
}