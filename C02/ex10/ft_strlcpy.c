/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:28:25 by aperin            #+#    #+#             */
/*   Updated: 2022/09/13 10:32:24 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[i] != '\0')
	{
		if (i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		len++;
	}
	dest[i] = '\0';
	return (len);
}
