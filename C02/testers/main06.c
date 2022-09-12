#include <stdio.h>

int	ft_str_is_printable(char *str);

int main(void)
{
	char str1[] = "Hello how are you ?";
	char str2[] = "Hello \n how are you ?";
	char str3[] = "";

	
	printf("\"Hello how are you ?\": %d\n", ft_str_is_printable(str1));
	printf("\"Hello \\n how are you ?\": %d\n", ft_str_is_printable(str2));
	printf("\"\": %d\n", ft_str_is_printable(str3));
}
