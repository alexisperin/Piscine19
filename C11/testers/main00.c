#include <unistd.h>

void ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putnbr(int nb)
{
	char	minus;
	char	n;

	minus = '-';
	if (nb < 0)
	{
		write (1, &minus, 1);
		if (nb != -2147483648)
			nb = -nb;
		else
		{
			write(1, "2", 1);
			nb = 147483648;
		}
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	n = '0' + nb;
	write(1, &n, 1);
}

int main(void)
{
	int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_foreach(tab, 10, &ft_putnbr);
}