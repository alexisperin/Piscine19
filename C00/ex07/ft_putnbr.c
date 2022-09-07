#include <unistd.h>

void ft_putnbr(int nb)
{
	char minus = '-';

	if(nb < 0)
	{
		write(1, &minus, 1);
		nb = -nb;
	}

	if(nb > 9)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}

	char n = '0' + nb;
	write(1, &n, 1);
}