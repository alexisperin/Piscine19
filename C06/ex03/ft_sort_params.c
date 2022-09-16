/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:22:25 by aperin            #+#    #+#             */
/*   Updated: 2022/09/16 11:22:55 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	write(1, str, n);
	write(1, "\n", 1);
}

int	compare(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

void	sort_params(char **argv, int i1, int i2)
{
	char	*tmp;

	while (i1 < i2)
	{
		if (compare(argv[i1], argv[i2]) > 0)
		{
			tmp = argv[i2];
			argv[i2] = argv[i1];
			argv[i1] = tmp;
		}
		i2--;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc - 1)
	{
		sort_params(argv, i, argc - 1);
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
