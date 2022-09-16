#include <stdlib.h>

int get_size(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int get_full_size(int size, char **strs, char *sep)
{
	int full_size;
	int i;

	full_size = (size - 1) * get_size(sep);
	i = 0;
	while (i < size)
	{
		full_size += get_size(strs[i]);
		i++;
	}
	return (full_size + 1);
}

int	concatenate(char **new_str, char *str, int j)
{
	int i;

	i = 0;
	while (str[i])
	{
		(*new_str)[j] = str[i];
		i++;
		j++;
	}
	return (j);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_str;
	int i;
	int j;

	i = 0;
	j = 0;
	if (size <= 0)
		return ("");
	new_str = malloc(get_full_size(size, strs, sep) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	while (i < size)
	{
		j = concatenate(&new_str, strs[i], j);
		if (i == size - 1)
			break ;
		j = concatenate(&new_str, sep, j);
		i++;
	}
	new_str[j] = '\0';
	return (new_str);
}