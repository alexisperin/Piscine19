#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char s1[] = "hi";
	char s2[] = "Hello how are you ?";

	printf("String: %s\n", s2);
	printf("To find: %s\n", s1);
    char *s3 = ft_strstr(s2, s1);
	printf("Result: %s\n", s3);
}
