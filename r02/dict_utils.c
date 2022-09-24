/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopeyrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:59:50 by dopeyrat          #+#    #+#             */
/*   Updated: 2022/09/24 16:05:24 by dopeyrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_add_dict_bis(char *str, t_dict *dict)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	dict->value = ft_strndup(str, i);
	dict->nbr = 0;
	if (!dict->value)
		return (-1);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] != ':')
		return (-1);
	i++;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	j = 0;
	while (str[i + j] && str[i + j] != '\n')
		j++;
	dict->nbr = ft_strndup(&str[i], j);
	dict->exp = ft_strlen(dict->value) - 1;
	if (!dict->nbr)
		return (-1);
	return (0);
}

int	ft_add_dict(char *str, t_dict **start_dict)
{
	t_dict	*dict;

	if (str[0] == '\n' || str[0] == '\0')
		return (0);
	dict = *start_dict;
	if (dict)
	{
		while (dict->next)
			dict = dict->next;
		dict->next = malloc(sizeof(t_dict));
		dict = dict->next;
	}
	else
	{
		dict = malloc(sizeof(t_dict));
		*start_dict = dict;
	}
	if (!dict)
		return (-1);
	dict->next = 0;
	return (ft_add_dict_bis(str, dict));
}

int	free_dict(t_dict *dict, char *str, int fd)
{
	t_dict	*tmp;

	tmp = 0;
	if (str)
		free(str);
	if (fd)
		close(fd);
	if (dict)
	{
		while (dict != 0)
		{
			free(dict->nbr);
			free(dict->value);
			tmp = dict->next;
			free(dict);
			dict = tmp;
		}
	}
	return (0);
}
