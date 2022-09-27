/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:22:54 by aperin            #+#    #+#             */
/*   Updated: 2022/09/27 17:15:12 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_putnbr_base(int nbr, char *base, int base_size);

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	skip_prefix(char *str, int *sign)
{
	int	i;

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

int	convert(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base, int base_size)
{
	int	i;
	int	sign;
	int	nbr;
    int curr;

	sign = 1;
	nbr = 0;
	i = skip_prefix(str, &sign);
    curr = convert(str[i], base);
	while (str[i] && curr >= 0)
	{
		nbr = (nbr * base_size) + curr;
        curr = convert(str[i + 1], base);
		i++;
	}
	return (sign * nbr);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int base_from_size;
    int base_to_size;
    int nb;
    
	base_from_size = check_base(base_from);
    base_to_size = check_base(base_to);
	if (base_from_size <= 1 || base_to_size <= 1)
		return (NULL);
    nb = ft_atoi_base(nbr, base_from, base_from_size);
    return (ft_putnbr_base(nb, base_to, base_to_size));
}