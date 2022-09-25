/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopeyrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:27:27 by dopeyrat          #+#    #+#             */
/*   Updated: 2022/09/25 12:41:45 by dopeyrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	dict_error(t_dict *dict, char *nbr, int m)
{
	if (m)
		free(nbr);
	write(2, "Dict Error\n", 11);
	free_dict(dict, 0, 0);
	return (-1);
}

int	input_error(t_dict *dict, char *nbr, int m)
{
	if (m)
		free(nbr);
	write(2, "Error\n", 6);
	free_dict(dict, 0, 0);
	return (-1);
}

char	*read_stdin(int *m)
{
	char	*str;
	char	buff[16];
	int		ret;

	str = ft_strdup("");
	if (!str)
		return (0);
	ret = 1;
	while (ret)
	{
		ret = read(0, buff, 16);
		if (ret == -1)
		{
			free(str);
			return (0);
		}
		str = ft_strncat_f(str, buff, 16);
		if (!str)
			return (0);
	}
	*m = 1;
	return (str);
}

int	check_state(t_dict *dict, char *nbr, int m)
{
	if (!ft_is_num(nbr))
		return (input_error(dict, nbr, m));
	if (nbr[0] == 0)
		return (input_error(dict, nbr, m));
	if (!dict)
		return (dict_error(0, nbr, m));
	return (cut_nbr(dict, nbr, m));
}

int	main(int argc, char **argv)
{
	t_dict	*dict;
	char	*nbr;
	int		m;

	m = 0;
	if (argc != 1 && argc != 2 && argc != 3)
		return (input_error(0, 0, 0));
	if (argc == 1)
	{
		nbr = read_stdin(&m);
		if (!nbr)
			return (-1);
		dict = parse_dict("numbers.dict.txt");
	}
	else if (argc == 2)
	{
		dict = parse_dict("numbers.dict.txt");
		nbr = argv[1];
	}
	else
	{
		dict = parse_dict(argv[1]);
		nbr = argv[2];
	}
	return (check_state(dict, nbr, m));
}
