/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:53:21 by aperin            #+#    #+#             */
/*   Updated: 2022/09/14 11:50:26 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_str(char *str, char *to_find, int start)
{
	int	i;

	i = 0;
	while (to_find[i])
	{
		if (str[start + i] != to_find[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			if (check_str(str, to_find, i))
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
