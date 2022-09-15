/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:03:36 by aperin            #+#    #+#             */
/*   Updated: 2022/09/15 15:13:26 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	write(1, str, n);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		ft_putstr(argv[0]);
	return (0);
}
