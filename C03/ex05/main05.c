#include <stdio.h>

int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char s1[50] = "Hello";
	char s2[] = " how are you ?";

	printf("Destination: %s\n", s1);
	printf("Source: %s\n", s2);
    int res = ft_strlcat(s1, s2, 50);
	printf("Result: %d, %s\n", res, s1);
}
