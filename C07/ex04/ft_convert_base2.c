/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:00:50 by aperin            #+#    #+#             */
/*   Updated: 2022/09/27 17:07:56 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*str_add_char(char *src, char c)
{
	int		i;
	char	*dest;

	if (!src)
		return (NULL);
	i = 0;
	while (src[i])
		i++;
	dest = malloc((i + 2) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = c;
	dest[i + 1] = 0;
	free(src);
	return (dest);
}

char	*putnbr_base_rec(long int nbr, char *base, int base_size, char *new_nbr)
{
	char	c;

	if (nbr >= base_size)
		new_nbr = putnbr_base_rec(nbr / base_size, base, base_size, new_nbr);
	c = base[nbr % base_size];
	return (str_add_char(new_nbr, c));
}

char	*ft_putnbr_base(int nbr, char *base, int base_size)
{
	char		*new_nbr;
	long int	n;

	new_nbr = malloc(sizeof(char));
	if (!new_nbr)
		return (NULL);
	new_nbr[0] = 0;
	n = (long int) nbr;
	if (n < 0)
	{
		new_nbr = str_add_char(new_nbr, '-');
		n *= -1;
	}
	return (putnbr_base_rec(n, base, base_size, new_nbr));
}