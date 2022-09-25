/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopeyrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:28:19 by dopeyrat          #+#    #+#             */
/*   Updated: 2022/09/24 18:06:51 by dopeyrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_remove_nl(char *str)
{
	int		i;
	char	*dst;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\0')
		return (str);
	dst = ft_strdup(&str[i + 1]);
	free(str);
	if (!dst)
		return (0);
	return (dst);
}

int	cat_until_nl(t_dict **dict, char **rest, int fd)
{
	int		ret;
	char	buff[16];

	while (!ft_find_nl(*rest))
	{
		ret = read(fd, buff, 16);
		if (ret == -1)
			return (free_dict(*dict, *rest, fd));
		else if (ret == 0)
		{
			ret = ft_add_dict(*rest, dict);
			if (ret == -1)
				return (free_dict(*dict, *rest, fd));
			free_dict(0, *rest, fd);
			return (2);
		}
		*rest = ft_strncat_f(*rest, buff, ret);
		if (!rest)
			return (free_dict(*dict, *rest, fd));
	}
	return (1);
}

int	init_parsing(t_dict **dict, char **rest, int *fd, char *str)
{
	*fd = open(str, O_RDONLY);
	if (*fd == -1)
		return (0);
	*rest = ft_strdup("");
	if (!(*rest))
		return (free_dict(0, 0, *fd));
	*dict = 0;
	return (1);
}

int	found_nl(t_dict **dict, char **rest, int fd)
{
	int	ret;

	ret = ft_add_dict(*rest, dict);
	if (ret == -1)
	{
		free_dict(*dict, *rest, fd);
		return (0);
	}
	*rest = ft_remove_nl(*rest);
	if (!(*rest))
	{
		free_dict(*dict, 0, fd);
		return (0);
	}
	return (1);
}

t_dict	*parse_dict(char *str)
{
	int		fd;
	int		ret;
	char	*rest;
	t_dict	*dict;

	if (!init_parsing(&dict, &rest, &fd, str))
		return (0);
	while (1)
	{
		ret = cat_until_nl(&dict, &rest, fd);
		if (ret == 0)
			return (0);
		else if (ret == 2)
			return (dict);
		if (!found_nl(&dict, &rest, fd))
			return (0);
	}
	return (0);
}
