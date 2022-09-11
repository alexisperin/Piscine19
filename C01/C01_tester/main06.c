#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
	char str1[] = "Hello";
	char str2[] = "Comment ca va ?";

	printf("Expected:\n");
	printf("5, 15\n");
	printf("Result:\n");
	printf("%d, %d\n", ft_strlen(str1), ft_strlen(str2));
}