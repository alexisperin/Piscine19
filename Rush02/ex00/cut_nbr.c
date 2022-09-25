/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopeyrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:05:53 by dopeyrat          #+#    #+#             */
/*   Updated: 2022/09/25 13:36:47 by dopeyrat         ###   ########.fr       */
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
	j = -1;
	while (++j < 3 - (i % 3))
		str[j] = '0';
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

t_data	*init_data(t_dict *dict, char *nbr, int m)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	if (!data)
	{
		if (m)
			free(nbr);
		return (0);
	}
	data->buff = ft_strdup("");
	if (!data->buff)
	{
		if (m)
			free(nbr);
		free(data);
		return (0);
	}
	data->m = m;
	data->ww = 1;
	data->w = 0;
	data->str = 0;
	data->dict = dict;
	return (data);
}

int	free_data(t_data *data, char *nbr)
{
	free(data->str);
	free(data->buff);
	free_dict(data->dict, 0, 0);
	if (data->m)
		free(nbr);
	free(data);
	return (-1);
}

int	display_nbr(t_data *data, char *nbr)
{
	if (data->ww && data->buff)
		ft_putstr(data->buff);
	else
	{
		write(2, "Dict Error\n", 11);
		free_data(data, nbr);
		return (-1);
	}
	free_data(data, nbr);
	return (0);
}

int	cut_nbr(t_dict *dict, char *nbr, int m)
{
	int		i;
	int		j;
	t_data	*data;

	data = init_data(dict, nbr, m);
	if (!data)
		return (free_dict(dict, 0, 0));
	data->str = get_first_group(nbr);
	if (!data->str)
		return (free_data(data, nbr));
	j = 0;
	while (nbr[j])
		j++;
	i = j - (j % 3);
	print_num(data->str, data->dict, i, data);
	while (i > 0)
	{
		ft_strncpy_m(data->str, &nbr[j - i], 3);
		i = i - 3;
		print_num(data->str, data->dict, i, data);
	}
	return (display_nbr(data, nbr));
}
