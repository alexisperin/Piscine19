/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 12:09:53 by aperin            #+#    #+#             */
/*   Updated: 2022/09/12 10:45:53 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_tab(int *tab, int i1, int i2)
{
	int	tmp;

	while (i1 < i2)
	{
		if (tab[i1] > tab[i2])
		{
			tmp = tab[i2];
			tab[i2] = tab[i1];
			tab[i1] = tmp;
		}
		i2--;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = size - 1;
	while (i1 < i2)
	{
		sort_tab(tab, i1, i2);
		i1++;
	}
}
