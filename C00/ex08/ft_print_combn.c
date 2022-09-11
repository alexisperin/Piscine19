/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:05:43 by aperin            #+#    #+#             */
/*   Updated: 2022/09/11 11:07:49 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	combn_recursive(int n, char *comb, int depth, int start)
{
	if (depth < n)
	{
		comb[depth] = start;
		while (comb[depth] <= '9' - n + depth + 1)
		{
			combn_recursive(n, comb, depth + 1, comb[depth] + 1);
			if (depth == n - 1)
			{
				if (comb[0] < '9' - n + 1)
					write(1, comb, n + 2);
				else
					write(1, comb, n);
			}
			comb[depth]++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	comb[11];

	comb[n] = ',';
	comb[n + 1] = ' ';
	combn_recursive(n, comb, 0, '0');
}
