/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:06:20 by aperin            #+#    #+#             */
/*   Updated: 2022/09/14 15:07:28 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	putnbr_base_recursive(int nbr, char *base, int base_size)
{
	char c;

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
	int base_size;

	base_size = check_base(base);
	if (base_size <= 1)
		return ;
	putnbr_base_recursive(nbr, base, base_size);
}
