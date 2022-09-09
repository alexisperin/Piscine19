/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:36:10 by aperin            #+#    #+#             */
/*   Updated: 2022/09/08 14:38:14 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_comb(char *comb)
{
	char	comma[2];

	comma[0] = ',';
	comma[1] = ' ';
	write (1, comb, 3);
	if (comb[0] != '7')
		write (1, comma, 2);
}

void	ft_print_comb(void)
{
	char	comb[3];

	comb[0] = '0';
	while (comb[0] <= '7')
	{
		comb[1] = comb[0] + 1;
		while (comb[1] <= '8')
		{
			comb[2] = comb[1] + 1;
			while (comb[2] <= '9')
			{
				write_comb (comb);
				comb[2]++;
			}
			comb[1]++;
		}
		comb[0]++;
	}
}
