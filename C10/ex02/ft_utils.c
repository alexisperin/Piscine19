/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:05:49 by aperin            #+#    #+#             */
/*   Updated: 2022/09/28 16:18:34 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	if (str == NULL)
		return (0);
	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_putstr(char *str, int output, int len)
{
	if (len == 0)
		len = ft_strlen(str);
	write(output, str, len);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		n = (n * 10) + str[i] - 48;
		i++;
	}
	return (n);
}

#include <stdio.h>
char	*ft_strcat_tail(char *dest, char *src, int n, int src_size)
{
	char	*str;
	int		i;
	int		j;

	str = malloc((n + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (i < n - src_size)
	{
		str[i] = dest[n - src_size + i];
		i++;
	}
	j = 0;
	while (j < src_size)
	{
		str[i + j] = src[j];
		j++;
	}
	str[j] = 0;
	free(dest);
	return (str);
}