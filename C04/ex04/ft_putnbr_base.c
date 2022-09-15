/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:06:20 by aperin            #+#    #+#             */
/*   Updated: 2022/09/15 10:34:18 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
		while (base[i] && base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	putnbr_base_recursive(int nbr, char *base, int base_size)
{
	char	c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= base_size)
		putnbr_base_recursive(nbr / base_size, base, base_size);
	c = base[nbr % base_size];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;

	base_size = check_base(base);
	if (base_size <= 1)
		return ;
	putnbr_base_recursive(nbr, base, base_size);
}
