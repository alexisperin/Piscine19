/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopeyrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:27:27 by dopeyrat          #+#    #+#             */
/*   Updated: 2022/09/24 16:58:42 by dopeyrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	dict_error(t_dict *dict)
{
	write(2, "Dict Error\n", 11);
	free_dict(dict, 0, 0);
	return (-1);
}

int	input_error(t_dict *dict)
{
	write(2, "Error\n", 6);
	free_dict(dict, 0, 0);
	return (-1);
}

int	check_exp(t_dict, char *str)
{
	t_dict	*curr_dict;
	int		exp;
	int		i;

	curr_dict = dict;
	exp = ft_strlen(str) - 1;
	exp = exp - (exp % 3);
	while (curr_dict)
	{
		if (curr_dict->exp == exp && curr_dict->value[0] == '1')
		{
			i = 1;
			while (i <= exp)
			{
				if (curr_dict->value[i] != '0')
					break ;
				i++;
			}
			if (i == exp + 1)
				return (1);
		}
		curr_dict = curr_dict->next;
	}
	return (0);
}

int	check_dict(t_dict *dict, char *str)
{
	t_dict	*curr_dict;
	int		val;

	curr_dict = dict;
	val = 0;
	while (val <= 100)
	{
		while (curr_dict)
		{
			if (ft_atoi(curr_dict->value) == val)
				break ;
			curr_dict = curr_dict->next;
		}
		curr_dict = dict;
		if (val < 20)
			val++;
		else
			val += 10;
	}
	if (val <= 100)
		return (0);
	return (check_exp(dict, str));
}

int	main(int argc, char **argv)
{
	t_dict	*dict;
	char	*nbr;

	if (argc != 2 && argc != 3)
		return (input_error(0));
	if (argc == 2)
	{
		dict = parse_dict("numbers.dict.txt");
		nbr = argv[1];
	}
	else
	{
		dict = parse_dict(argv[1]);
		nbr = argv[2];
	}
	if (!ft_is_num(nbr))
		return (input_error(dict));
	if (nbr[0] == 0)
		return (input_error(dict));
	if (!dict)
		return (dict_error(0));
	//if (!check_dict(dict, nbr))
	//	return (dict_error(dict));
	return (cut_nbr(dict, nbr));
}
