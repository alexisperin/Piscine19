/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:40:27 by aperin            #+#    #+#             */
/*   Updated: 2022/09/22 13:40:55 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	swap_str(char **str1, char **str2)
{
	char	*tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i1;
	int	i2;

	i1 = 0;
	while (tab[i1])
	{
		i2 = i1 + 1;
		while (tab[i2])
		{
			if (ft_strcmp(tab[i1], tab[i2]) > 0)
			{
				swap_str(&tab[i1], &tab[i2]);
			}
			i2++;
		}
		i1++;
	}
}
