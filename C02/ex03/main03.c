#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main(void)
{
	char str1[] = "0123456789";
	char str2[] = "01234E6789";
	char str3[] = "";

	
	printf("\"0123456789\": %d\n", ft_str_is_numeric(str1));
	printf("\"01234E6789\": %d\n", ft_str_is_numeric(str2));
	printf("\"\": %d\n", ft_str_is_numeric(str3));
    return (0);
}