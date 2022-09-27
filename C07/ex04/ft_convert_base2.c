/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:00:50 by aperin            #+#    #+#             */
/*   Updated: 2022/09/27 17:07:56 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr_base_recursive(long int nbr, char *base, int base_size)
{
	char	c;

	if (nbr >= base_size)
		putnbr_base_recursive(nbr / base_size, base, base_size);
	c = base[nbr % base_size];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base, int base_size)
{
	long int	n;

	n = (long int) nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	putnbr_base_recursive(n, base, base_size);
}