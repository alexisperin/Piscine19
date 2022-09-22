/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:36:54 by aperin            #+#    #+#             */
/*   Updated: 2022/09/22 13:37:25 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	low_to_high;
	int	high_to_low;

	i = 1;
	low_to_high = 1;
	high_to_low = 1;
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) > 0)
			low_to_high = 0;
		else if (f(tab[i - 1], tab[i]) < 0)
			high_to_low = 0;
		i++;
	}
	return (low_to_high || high_to_low);
}
