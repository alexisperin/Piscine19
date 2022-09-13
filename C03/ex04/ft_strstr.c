int check_str(char *str, char *to_find, int start)
{
	int i;
	int j;

	i = start;
	j = 0;
	while (str[i] && to_find[j])
	{
		if (str[i] != to_find[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}

char *ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
			if(check_str(str, to_find, i))
				return (&str[i]);
		i++;
	}
	return ('\0');
}