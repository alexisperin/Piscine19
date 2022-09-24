/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopeyrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:28:54 by dopeyrat          #+#    #+#             */
/*   Updated: 2022/09/24 13:58:13 by dopeyrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_strdup(char *str)
{
	int		i;
	char	*dst;

	i = 0;
	while (str[i])
		i++;
	dst = malloc(sizeof(char) * (i + 1));
	if (!dst)
		return (0);
	i = 0;
	while (str[i])
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

char	*ft_strndup(char *str, int n)
{
	int		i;
	char	*dst;

	i = 0;
	while (str[i] && i < n)
		i++;
	dst = malloc(sizeof(char) * (i + 1));
	if (!dst)
		return (0);
	i = 0;
	while (str[i] && i < n)
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_find_nl(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strncat_f(char *str, char *buff, int n)
{
	int		i;
	char	*dst;
	int		j;

	i = 0;
	while (str[i])
		i++;
	dst = malloc(sizeof(char) * (i + n + 1));
	if (!dst)
		return (0);
	i = 0;
	while (str[i])
	{
		dst[i] = str[i];
		i++;
	}
	j = 0;
	while (j < n)
	{
		dst[i + j] = buff[j];
		j++;
	}
	dst[i + j] = 0;
	free(str);
	return (dst);
}
