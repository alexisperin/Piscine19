/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 09:21:03 by aperin            #+#    #+#             */
/*   Updated: 2022/09/09 09:48:26 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb(char *n1, char *n2)
{
	char	space;
	char	comma[2];

	space = ' ';
	comma[0] = ',';
	comma[1] = ' ';
	write(1, n1, 2);
	write(1, &space, 1);
	write(1, n2, 2);
	if (n1[0] != '9' || n1[1] != '8')
		write(1, comma, 2);
}

void	ft_print_comb2(void)
{
	char	n1[2];
	char	n2[2];
	int		counter1;
	int		counter2;

	counter1 = 0;
	counter2 = 0;
	while (counter1 <= 98)
	{
		counter2 = counter1 + 1;
		while (counter2 <= 99)
		{
			n1[0] = '0' + counter1 / 10;
			n1[1] = '0' + counter1 % 10;
			n2[0] = '0' + counter2 / 10;
			n2[1] = '0' + counter2 % 10;
			print_comb(n1, n2);
			counter2++;
		}
		counter1++;
	}
}
