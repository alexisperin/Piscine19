/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:38:41 by aperin            #+#    #+#             */
/*   Updated: 2022/09/22 13:39:11 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include <unistd.h>

void	do_op(int a, int b, int op)
{
	int	(*operator[5])(int, int);

	if (op == -1)
		ft_putstr("0");
	else if (op == 2 && b == 0)
		ft_putstr("Stop : division by zero");
	else if (op == 4 && b == 0)
		ft_putstr("Stop : modulo by zero");
	else
	{
		operator[0] = &plus;
		operator[1] = &minus;
		operator[2] = &div;
		operator[3] = &mul;
		operator[4] = &mod;
		ft_putnbr(operator[op](a, b));
		write(1, "\n", 1);
	}
}

int	get_op(char c)
{
	if (c == '+')
		return (0);
	else if (c == '-')
		return (1);
	else if (c == '/')
		return (2);
	else if (c == '*')
		return (3);
	else if (c == '%')
		return (4);
	else
		return (-1);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	do_op(ft_atoi(argv[1]), ft_atoi(argv[3]), get_op(argv[2][0]));
	return (0);
}
