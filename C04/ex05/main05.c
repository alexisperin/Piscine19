#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("%d\n", ft_atoi_base("  	--+--42342", "0123456789"));
	printf("%d\n", ft_atoi_base("---++545245H", "0123456789"));
	printf("%d\n", ft_atoi_base("	+-+-100015", "01"));
	printf("%d\n", ft_atoi_base("  --+-ae33g", "0123456789abcdef"));
}
