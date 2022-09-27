#include <stdio.h>
#include <limits.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	printf("%s\n", ft_convert_base("10", "0123456789", "01"));
	printf("%s\n", ft_convert_base("  +--+-+-+-4", "0123456789", "01"));
	printf("%s\n", ft_convert_base("10101101", "01", "0123456789"));
	printf("%s\n", ft_convert_base("2147483647", "0123456789", "0123456789abcdef"));
	printf("%s\n", ft_convert_base("-2147483648", "0123456789", "0123456789abcdef"));
}