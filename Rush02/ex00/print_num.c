/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopeyrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:00:27 by dopeyrat          #+#    #+#             */
/*   Updated: 2022/09/25 11:24:54 by dopeyrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_hundred(char c, t_dict *start, t_data *data)
{
	t_dict	*dict;
	char	*hundred;

	if (data->w)
		data->buff = ft_strncat_f(data->buff, " ", 1);
	data->w = 1;
	data->wt = 1;
	dict = start;
	while (dict && (dict->value[0] != c || dict->exp != 0))
		dict = dict->next;
	if (dict)
		data->buff = ft_strncat_f(data->buff, dict->nbr, ft_strlen(dict->nbr));
	else
		data->ww = 0;
	data->buff = ft_strncat_f(data->buff, " ", 1);
	hundred = "100";
	dict = start;
	while (dict && ft_strcmp(dict->value, hundred))
		dict = dict->next;
	if (dict)
		data->buff = ft_strncat_f(data->buff, dict->nbr, ft_strlen(dict->nbr));
	else
		data->ww = 0;
}

void	print_ten(char c, t_dict *dict, t_data *data)
{
	if (data->w)
		data->buff = ft_strncat_f(data->buff, " ", 1);
	data->w = 1;
	data->wt = 1;
	while (1)
	{
		while (dict && ft_strlen(dict->value) != 2)
			dict = dict->next;
		if (!dict)
			break ;
		if (dict->value[0] == c && dict->value[1] == '0')
			break ;
		dict = dict->next;
	}
	if (!dict)
		data->ww = 0;
	else
		data->buff = ft_strncat_f(data->buff, dict->nbr, ft_strlen(dict->nbr));
}

void	print_ten_one(char c, t_dict *dict, t_data *data)
{
	if (data->w)
		data->buff = ft_strncat_f(data->buff, " ", 1);
	data->w = 1;
	data->wt = 1;
	while (1)
	{
		while (dict && ft_strlen(dict->value) != 2)
			dict = dict->next;
		if (!dict)
			break ;
		if (dict->value[0] == '1' && dict->value[1] == c)
			break ;
		dict = dict->next;
	}
	if (!dict)
		data->ww = 0;
	else
		data->buff = ft_strncat_f(data->buff, dict->nbr, ft_strlen(dict->nbr));
}

void	print_one(char c, t_dict *dict, int exp, t_data *data)
{
	if (c == '0' && exp != 0)
		return ;
	if (c == '0' && exp == 0 && data->w == 1)
		return ;
	if (data->w)
		data->buff = ft_strncat_f(data->buff, " ", 1);
	data->w = 1;
	data->wt = 1;
	while (dict && (dict->value[0] != c || ft_strlen(dict->value) != 1))
		dict = dict->next;
	if (dict->value[0] == c)
		data->buff = ft_strncat_f(data->buff, dict->nbr, ft_strlen(dict->nbr));
	else
		data->ww = 0;
}

void	print_num(char *str, t_dict *dict, int exp, t_data *data)
{
	data->wt = 0;
	if (str[0] != '0')
		print_hundred(str[0], dict, data);
	if (str[1] != '0' && str[1] != '1')
		print_ten(str[1], dict, data);
	else if (str[1] == '1')
		print_ten_one(str[2], dict, data);
	if (str[1] != '1')
		print_one(str[2], dict, exp, data);
	if (exp != 0 && data->wt == 1)
		print_exp(exp, dict, data);
	else if (exp == 0)
		data->buff = ft_strncat_f(data->buff, "\n", 1);
}
