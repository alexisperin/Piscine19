/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:21:41 by aperin            #+#    #+#             */
/*   Updated: 2022/09/29 12:58:10 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

char	*ft_strcat_tail(char *dest, char *src, int n, int src_size)
{
	char	*str;
	int		i;
	int		j;

	str = malloc((n + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (dest[src_size + i])
	{
		str[i] = dest[src_size + i];
		i++;
	}
	j = 0;
	while (j < src_size)
	{
		str[i + j] = src[j];
		j++;
	}
	str[i + j] = 0;
	free(dest);
	return (str);
}

void	read_file(int fd, int n)
{
	char	*buf;
	char	*tail;
	int		size;

	buf = malloc(n * sizeof(char));
	tail = malloc((n + 1) * sizeof(char));
	if (!buf || !tail)
		return ;
	tail[0] = 0;
	size = read(fd, buf, n);
	while (size != 0)
	{
		tail = ft_strcat_tail(tail, buf, n, size);
		size = read(fd, buf, n);
	}
	ft_putstr(tail, STDOUT, 0);
	free(buf);
	free(tail);
}

void	display_file(char *prog_name, char *filename, int n)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		display_error(prog_name, filename);
	else
		read_file(fd, n);
	close(fd);
}
