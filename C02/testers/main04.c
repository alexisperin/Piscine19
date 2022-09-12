#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int main(void)
{
	char str1[] = "hello";
	char str2[] = "hello !";
	char str3[] = "";

	
	printf("\"hello\": %d\n", ft_str_is_lowercase(str1));
	printf("\"hello !\": %d\n", ft_str_is_lowercase(str2));
	printf("\"\": %d\n", ft_str_is_lowercase(str3));
}
