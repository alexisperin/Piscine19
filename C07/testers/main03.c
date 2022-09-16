#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *strs[10];

	strs[0] = "Just";
	strs[1] = "a";
	strs[2] = "test";
	strs[3] = "to see";
	strs[4] = "if";
	strs[5] = "i'm";
	strs[6] = "stupid";
	strs[7] = "or";
	strs[8] = "not.";
	strs[9] = "\n";

	printf("%s", ft_strjoin(10, strs, " | "));
}