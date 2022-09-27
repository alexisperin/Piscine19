/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:06:24 by aperin            #+#    #+#             */
/*   Updated: 2022/09/27 11:45:52 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(42352, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-4234, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(INT_MAX, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(INT_MIN, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(0, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(32, "01");
	write(1, "\n", 1);
	ft_putnbr_base(INT_MAX, "01");
	write(1, "\n", 1);
	ft_putnbr_base(3635, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(-3635, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(INT_MAX, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(INT_MIN, "0123456789abcdef");
}
