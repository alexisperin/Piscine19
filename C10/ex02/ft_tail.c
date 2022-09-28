/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:21:41 by aperin            #+#    #+#             */
/*   Updated: 2022/09/28 16:13:18 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_stdin(int n)
{
	char	*buf;
    char    *tail;
	int		size;

	buf = malloc(n * sizeof(char));
    tail = malloc((n + 1) * sizeof(char));
    if (!buf || !tail)
        return ;
    size = read(0, buf, n);
	while (size != 0)
	{
		tail = ft_strcat_tail(tail, buf, n, size);
		size = read(0, buf, n);
	}
    ft_putstr(tail, STDOUT, 0);
}

void	display_file(char *prog_name, char *filename, int n)
{
    (void) n;
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
