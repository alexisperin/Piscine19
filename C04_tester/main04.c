/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:06:24 by aperin            #+#    #+#             */
/*   Updated: 2022/09/14 15:07:48 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(42352, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-4234, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(32, "01");
	write(1, "\n", 1);
	ft_putnbr_base(3635, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(-3635, "0123456789abcdef");
}
