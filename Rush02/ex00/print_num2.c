/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopeyrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:24:26 by dopeyrat          #+#    #+#             */
/*   Updated: 2022/09/25 12:56:44 by dopeyrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_check_exp(int exp, char *value, int exp2)
{
	int	i;

	if (exp != exp2)
		return (0);
	if (!value)
		return (0);
	i = 1;
	if (value[0] != '1')
		return (0);
	while (value[i] == '0')
		i++;
	if (value[i])
		return (0);
	return (1);
}

void	print_exp(int exp, t_dict *dict, t_data *data)
{
	data->buff = ft_strncat_f(data->buff, " ", 1);
	while (dict && !ft_check_exp(exp, dict->value, dict->exp))
		dict = dict->next;
	if (dict)
		data->buff = ft_strncat_f(data->buff, dict->nbr, ft_strlen(dict->nbr));
	else
		data->ww = 0;
}
