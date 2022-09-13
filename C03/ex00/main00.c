#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char s1[] = "Hello how 1re you ?";
	char s2[] = "Hello how @re you ?";

	printf("Expected: ??\n");
	printf("Result: %d\n", ft_strcmp(s1, s2));
}