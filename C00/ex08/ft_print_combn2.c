/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:53:21 by aperin            #+#    #+#             */
/*   Updated: 2022/09/08 12:54:49 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void write_comb(char *comb, int n)
{
	if (comb[0] == '9' - n + 1)
		write(1, comb, n);
	else
		write(1, comb, n + 2);
}

void print_combn_recursive(int n, int index, char *comb, char min, char max)
{
	if(index > 8)
		return;

	if(index == 8)
		for(comb[index] = min; comb[index] <= max; comb[index]++)
			write_comb(comb, n);
	else
		for(comb[index] = min; comb[index] <= max; comb[index]++)
			print_combn_recursive(n, index + 1, comb, comb[index] + 1, max + 1);
}

void init_comb(char *comb, int n)
{
	int i;

	i = 1;
	comb[0] = '0';
	while (i < n)
	{
		comb[i] = comb[i-1];
		i++;
	}
	comb[n] = ',';
	comb[n+1] = ' ';
}

void ft_print_combn(int n)
{
	char	comb[11];

	init_comb(comb, n);


	int index = 9 - n;
	char max = '9' - n + 1;

	if(n == 1)
		while (comb[0] <= '9')
		{
			write_comb(comb, n);
			comb[0]++;
		}

	else
		for(comb[index] = '0'; comb[index] <= max; comb[index]++)
			print_combn_recursive(n, index + 1, comb, comb[index] + 1, max + 1);
}
