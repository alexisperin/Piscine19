/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopeyrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:00:27 by dopeyrat          #+#    #+#             */
/*   Updated: 2022/09/24 17:33:44 by dopeyrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_exp(int exp, t_dict *dict)
{
	while (dict && dict->exp != exp)
		dict = dict->next;
	if (dict->exp == exp)
		ft_putstr(dict->nbr);
	write(1, " ", 1);
}

void	print_hundred(char c, t_dict *start)
{
	t_dict	*dict;
	char	*hundred;

	dict = start;
	while (dict && dict->value[0] != c && dict->exp != 0)
		dict = dict->next;
	ft_putstr(dict->nbr);
	write(1, " ", 1);
	hundred = "100";
	dict = start;
	while (dict && ft_strcmp(dict->value, hundred))
		dict = dict->next;
	ft_putstr(dict->nbr);
	write(1, " ", 1);
}

void	print_ten(char c, t_dict *dict)
{
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
		return ;
	ft_putstr(dict->nbr);
	write(1, " ", 1);
}

void	print_ten_one(char c, t_dict *dict)
{
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
		return ;
	ft_putstr(dict->nbr);
	write(1, " ", 1);
}

void	print_one(char c, t_dict *dict, int exp, int *w)
{
	if (c == '0' && exp != 0)
		return ;
	if (c == '0' && exp == 0 && *w)
		return ;
	while (dict && dict->value[0] != c && ft_strlen(dict->value) != 1)
		dict = dict->next;
	if (dict->value[0] == c)
		ft_putstr(dict->nbr);
	write(1, " ", 1);
}

void	print_num(char *str, t_dict *dict, int exp, int *w)
{
	if (str[0] != '0')
		print_hundred(str[0], dict);
	if (str[1] != '0' && str[1] != '1')
		print_ten(str[1], dict);
	else if (str[1] == '1')
		print_ten_one(str[2], dict);
	if (str[1] != '1')
		print_one(str[2], dict, exp, w);
	if (exp != 0)
		print_exp(exp, dict);
	else
		write(1, "\n", 1);
}
