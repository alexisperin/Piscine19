/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 09:49:31 by aperin            #+#    #+#             */
/*   Updated: 2022/09/19 09:49:51 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putnbr(int nb)
{
	char	minus;
	char	n;

	minus = '-';
	if (nb < 0)
	{
		write (1, &minus, 1);
		if (nb != -2147483648)
			nb = -nb;
		else
		{
			write(1, "2", 1);
			nb = 147483648;
		}
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	n = '0' + nb;
	write(1, &n, 1);
}

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	write(1, str, n);
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		i++;
	}
}
