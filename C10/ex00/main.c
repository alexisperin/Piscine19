/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:05:56 by aperin            #+#    #+#             */
/*   Updated: 2022/09/22 15:05:57 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
		ft_putstr("File name missing.\n", 2, 0);
	else if (argc > 2)
		ft_putstr("Too many arguments.\n", 2, 0);
	else
		display_file(argv[1]);
	return (0);
}
