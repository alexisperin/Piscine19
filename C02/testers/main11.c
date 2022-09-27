/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main11.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:26:26 by aperin            #+#    #+#             */
/*   Updated: 2022/09/12 17:13:36 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char str[200];
	char str2[] = "Coucou\ntu vas bien ?";
	int i = 0;

	while (i < 127)
	{
		str[i] = i + 1;
		i++;
	}
	while (i < 200)
	{
		str[i] = 0;
		i++;
	}
	ft_putstr_non_printable(str2);
	write(1, "\n", 1);
	ft_putstr_non_printable(str);
}
