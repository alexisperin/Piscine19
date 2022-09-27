/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:06:20 by aperin            #+#    #+#             */
/*   Updated: 2022/09/27 11:47:28 by aperin           ###   ########.fr       */
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
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] == 127)
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

void	putnbr_base_recursive(long int nbr, char *base, int base_size)
{
	char	c;

	if (nbr >= base_size)
		putnbr_base_recursive(nbr / base_size, base, base_size);
	c = base[nbr % base_size];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_size;
	long int	n;

	base_size = check_base(base);
	if (base_size <= 1)
		return ;
	n = (long int) nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	putnbr_base_recursive(n, base, base_size);
}
