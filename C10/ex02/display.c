/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:11:57 by aperin            #+#    #+#             */
/*   Updated: 2022/09/28 15:21:22 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	display_error(char *prog_name, char *filename)
{
	ft_putstr(basename(prog_name), STDERR, 0);
	ft_putstr(": ", STDERR, 2);
	ft_putstr(filename, STDERR, 0);
	ft_putstr(": ", STDERR, 2);
	ft_putstr(strerror(errno), STDERR, 0);
	ft_putstr("\n", STDERR, 1);
}

void	input_error(char *prog_name, char *filename, int error)
{
	ft_putstr(basename(prog_name), STDERR, 0);
	ft_putstr(": ", STDERR, 2);
    if (error == 0)
    {
        ft_putstr(filename, STDERR, 0);
        ft_putstr(": ", STDERR, 2);
        ft_putstr(strerror(errno), STDERR, 0);
    }
    else if (error == 1)
        ft_putstr("not enough input arguments", STDERR, 0);
	else if (error == 2)
        ft_putstr("illegal option", STDERR, 0);
    else if (error == 3)
    {
        ft_putstr("illegal offset -- ", STDERR, 0);
        ft_putstr(filename, STDERR, 0);
    }
    ft_putstr("\n", STDERR, 1);
}

void    display_header(char *filename)
{
    ft_putstr("==> ", STDOUT, 4);
    ft_putstr(filename, STDOUT, 0);
    ft_putstr(" <==\n", STDOUT, 5);
}