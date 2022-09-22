/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:41:14 by aperin            #+#    #+#             */
/*   Updated: 2022/09/22 13:41:46 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_str(char **str1, char **str2)
{
	char	*tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i1;
	int	i2;

	i1 = 0;
	while (tab[i1])
	{
		i2 = i1 + 1;
		while (tab[i2])
		{
			if (cmp(tab[i1], tab[i2]) > 0)
			{
				swap_str(&tab[i1], &tab[i2]);
			}
			i2++;
		}
		i1++;
	}
}
