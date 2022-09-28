/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:05:33 by aperin            #+#    #+#             */
/*   Updated: 2022/09/22 15:08:31 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "display_file.h"

void	display_file(char *file_name)
{
	int		file;
	int		size;
	char	buf[1000];

	file = open(file_name, O_RDONLY);
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
