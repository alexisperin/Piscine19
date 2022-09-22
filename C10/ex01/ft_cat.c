/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:48:47 by aperin            #+#    #+#             */
/*   Updated: 2022/09/22 16:48:49 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "ft_cat.h"

int	is_single_dash(char *str)
{
	if (str[0] == '-' && str[1] == '\0')
		return (1);
	return (0);
}

void	ft_stdin(void)
{
	char	buf[1000];
	int		size;

	size = read(0, buf, 1000);
	while (size != 0)
	{
		ft_putstr(buf, 1, size);
		size = read(0, buf, 1000);
	}
}

void	display_file(char *filename)
{
	int		file;
	int		size;
	char	buf[1000];

	file = open(filename, O_RDONLY);
	if (file == -1)
		ft_putstr("Cannot read file.\n", 2, 0);
	else
	{
		size = read(file, buf, 1000);
		while (size != 0)
		{
			if (size == -1)
			{
				ft_putstr("Cannot read file.\n", 2, 0);
				break ;
			}
			ft_putstr(buf, 1, size);
			size = read(file, buf, 1000);
		}
	}
	close(file);
}

void	ft_cat(char *filename)
{
	if (is_single_dash(filename))
		ft_stdin();
	else
		display_file(filename);
}
