/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:20:21 by aperin            #+#    #+#             */
/*   Updated: 2022/09/12 16:16:21 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
int	is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (str);
	if (is_lower(str[0]))
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (is_upper(str[i - 1]) && is_upper(str[i]))
			str[i] += 32;
		else if (is_lower(str[i - 1]) && is_upper(str[i]))
			str[i] += 32;
		else if (is_digit(str[i - 1]) && is_upper(str[i]))
			str[i] += 32;
		else if (!is_lower(str[i - 1]) && !is_upper(str[i - 1]) && !is_digit(str[i - 1]))
			if (is_lower(str[i]))
				str[i]-= 32;
		i++;
	}
	return (str);
}
