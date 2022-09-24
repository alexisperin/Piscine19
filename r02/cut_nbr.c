/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopeyrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:05:53 by dopeyrat          #+#    #+#             */
/*   Updated: 2022/09/24 17:33:35 by dopeyrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*get_first_group(char *nbr)
{
	int		i;
	char	*str;
	int		j;
	int		k;

	i = 0;
	while (nbr[i])
		i++;
	str = malloc(sizeof(char) * 4);
	if (!str)
		return (0);
	j = 0;
	while (j < 3 - (i % 3))
	{
		str[j] = '0';
		j++;
	}
	k = 0;
	while (k < i % 3)
	{
		str[j] = nbr[k];
		j++;
		k++;
	}
	str[3] = 0;
	return (str);
}

int	cut_nbr(t_dict *dict, char *nbr)
{
	int		i;
	char	*str;
	int		j;
	int		w;

	w = 0;
	str = get_first_group(nbr);
	if (!str)
		return (input_error(dict));
	j = 0;
	while (nbr[j])
		j++;
	i = j - (j % 3);
	if (!(str[0] == '0' && str[1] == '0' && str[2] == '0'))
		print_num(str, dict, i, &w);
	while (i > 0)
	{
		ft_strncpy_m(str, &nbr[j - i], 3);
		i = i - 3;
		print_num(str, dict, i, &w);
	}
	return (0);
}
