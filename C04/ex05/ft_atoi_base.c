int check_base_twice(char *base, int start)
{
	int i;

	i = start + 1;
	while (base[i])
	{
		if (base[start] == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	check_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || check_base_twice(base, i))
			return (0);
		i++;
	}
	return (i);
}

int skip_prefix(char *str, int *sign)
{
	int i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*sign = -(*sign);
		i++;
	}
	return (i);
}

int in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int convert(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	nbr;
	int base_size;

	sign = 1;
	nbr = 0;
	base_size = check_base(base);
	if (base_size <= 1)
		return (0);
	i = skip_prefix(str, &sign);
	while (in_base(str[i], base))
	{
		nbr = (nbr * base_size) + convert(str[i], base);
		i++;
	}
	return (sign * nbr);
}