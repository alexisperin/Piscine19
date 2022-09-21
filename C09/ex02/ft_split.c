#include <stdlib.h>

char **ft_split(char *str, char *charset)
{
	char **strs;
	int size;
	int i;
	int j;

	size = count_strings(str, charset) + 1;
	strs = malloc(size * sizeof(char *));
	if (strs == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		
	}

}