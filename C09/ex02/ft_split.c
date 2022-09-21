#include <stdlib.h>

int	is_seperator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}


int	size_split(char *str, char *charset)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (str[i])
	{
		while (str[i] && is_seperator(str[i], charset))
			i++;
		if (str[i])
			size++;
		while (str[i] && !is_seperator(str[i], charset))
			i++;
	}
	return (size);
}

char	*get_substring(char *str, int start, char *charset)
{
	int		len;
	int		i;
	char	*substring;

	len = 0;
	while (str[start + len] && !is_seperator(str[start + len], charset))
		len++;
	substring = malloc((len + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substring[i] = str[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;
	int		j;

	split = malloc((size_split(str, charset) + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && is_seperator(str[i], charset))
			i++;
		if (str[i])
		{
			split[j] = get_substring(str, i, charset);
			j++;
		}
		while (str[i] && !is_seperator(str[i], charset))
			i++;
	}
	split[j] = 0;
	return (split);
}