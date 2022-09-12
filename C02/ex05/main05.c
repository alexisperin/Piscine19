#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int main(void)
{
	char str1[] = "HELLO";
	char str2[] = "HElLO";
	char str3[] = "";

	
	printf("\"HELLO\": %d\n", ft_str_is_uppercase(str1));
	printf("\"HElLO !\": %d\n", ft_str_is_uppercase(str2));
	printf("\"\": %d\n", ft_str_is_uppercase(str3));
}