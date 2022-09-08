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
	int end = 0;
	if(n == 1 && comb[8] == '9')
		end = 1;
	else
	{
		for(int i = 8; i > 9 - n; i--)
		{
			if(comb[i] == comb[i-1] - 1)
				end = 1;
			else
				end = 0;
		}
	}
	

	char final_comb[9] = {'0', '0', '0', '0', '0', '0', '0', '0', '0'};
	int start = 9 - n;
	for(int i = 0; i < n; i++)
		final_comb[i] = comb[start + i];

	char comma[2] = {',', ' '};
	write(1, final_comb, n);

	if(end != 1)
		write(1, comma, 2);
}

void print_combn_recursive(int n, int index, char *comb, char min, char max)
{
	if(index > 8)
		return;

	if(index == 8)
	{
		for(comb[index] = min; comb[index] <= max; comb[index]++)
			write_comb(comb, n);
	}
	else
	{
		for(comb[index] = min; comb[index] <= max; comb[index]++)
			print_combn_recursive(n, index + 1, comb, comb[index] + 1, max + 1);
	}
}

void ft_print_combn(int n)
{
	char comb[9] = {'0', '0', '0', '0', '0', '0', '0', '0', '0'};
	int index = 9 - n;
	char max = '9' - n + 1;

	if(n == 1)
		for(comb[8] = '0'; comb[8] <= '9'; comb[8]++)
			write_comb(comb, n);

	else
		for(comb[index] = '0'; comb[index] <= max; comb[index]++)
			print_combn_recursive(n, index + 1, comb, comb[index] + 1, max + 1);
}
