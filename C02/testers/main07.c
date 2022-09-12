#include <stdio.h>

char	*ft_strupcase(char *str);

int main(void)
{
	char str1[] = "hello how are you ?";
	char str2[] = "HElLO HoW ARE yOU ?";

	
	printf("hello how are you ?: %s\n", ft_strupcase(str1));
	printf("HElLO HoW ARE yOU ?: %s\n", ft_strupcase(str2));
}