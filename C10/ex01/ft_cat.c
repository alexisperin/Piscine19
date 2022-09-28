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
#include <libgen.h>
#include <string.h>
#include <errno.h>
#include "ft_cat.h"

void	display_error(char *prog_name, char *filename)
{
	ft_putstr(basename(prog_name), STDERR, 0);
	ft_putstr(": ", STDERR, 2);
	ft_putstr(filename, STDERR, 0);
	ft_putstr(": ", STDERR, 2);
	ft_putstr(strerror(errno), STDERR, 0);
	ft_putstr("\n", STDERR, 1);
}

void	ft_stdin(void)
{
	char	buf[BUF_SIZE];
	int		size;

	size = read(0, buf, BUF_SIZE);
	while (size != 0)
	{
		ft_putstr(buf, STDOUT, size);
		size = read(0, buf, BUF_SIZE);
	}
}

void	display_file(char *prog_name, char *filename)
{
	int		file;
	int		size;
	char	buf[BUF_SIZE];

	file = open(filename, O_RDONLY);
	if (file == -1)
		display_error(prog_name, filename);
	else
	{
		size = read(file, buf, BUF_SIZE);
		while (size != 0)
		{
			if (size == -1)
			{
				display_error(prog_name, filename);
				break ;
			}
			ft_putstr(buf, STDOUT, size);
			size = read(file, buf, BUF_SIZE);
		}
	}
	close(file);
}

void	ft_cat(char *prog_name, char *filename)
{
	if (is_single_dash(filename))
		ft_stdin();
	else
		display_file(prog_name, filename);
}
