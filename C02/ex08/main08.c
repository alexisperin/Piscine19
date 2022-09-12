#include <stdio.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char str1[] = "HELLO HOW ARE YOU ?";
	char str2[] = "HElLO HoW ARE yOU ?";

	
	printf("HELLO HOW ARE YOU ?: %s\n", ft_strlowcase(str1));
	printf("HElLO HoW ARE yOU ?: %s\n", ft_strlowcase(str2));
}