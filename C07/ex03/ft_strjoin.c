/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:07:20 by aperin            #+#    #+#             */
/*   Updated: 2022/09/27 15:27:52 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_full_size(int size, char **strs, char *sep)
{
	int	full_size;
	int	i;

	full_size = (size - 1) * ft_strlen(sep);
	i = 0;
	while (i < size)
	{
		full_size += ft_strlen(strs[i]);
		i++;
	}
	return (full_size + 1);
}

int	concatenate(char **new_str, char *str, int j)
{
	int	i;

	if (!str)
		return (j);
	i = 0;
	while (str[i])
	{
		(*new_str)[j] = str[i];
		i++;
		j++;
	}
	(*new_str)[j] = '\0';
	return (j);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (size <= 0)
	{
		new_str = malloc(sizeof(char));
		if (!new_str)
			return (0);
		return (new_str);
	}
	new_str = malloc(get_full_size(size, strs, sep) * sizeof(char));
	if (!new_str)
		return (0);
	while (i < size)
	{
		j = concatenate(&new_str, strs[i], j);
		if (i == size - 1)
			break ;
		j = concatenate(&new_str, sep, j);
		i++;
	}
	return (new_str);
}
