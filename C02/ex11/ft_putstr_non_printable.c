/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:58:54 by aperin            #+#    #+#             */
/*   Updated: 2022/09/13 09:59:43 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar_hex(char c)
{
	char	*base;
	char	hex[3];

	base = "0123456789abcdef";
	hex[0] = '\\';
	hex[1] = base[c / 16];
	hex[2] = base[c % 16];
	write(1, hex, 3);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			putchar_hex(str[i]);
		i++;
	}
}
