/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:11:43 by aperin            #+#    #+#             */
/*   Updated: 2022/09/28 15:04:01 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void    ft_tail(int argc, char **argv)
{
    int n;
    int i;

    n = ft_atoi(argv[2]);
    if (argc == 3)
        ft_stdin(n);
    else if (argc == 4)
        display_file(argv[0], argv[3], n);
    else
    {
        i = 3;
        while (i < argc)
        {
            display_header(argv[i]);
            display_file(argv[0], argv[i], n);
            if (i != argc - 1)
                ft_putstr("\n", STDOUT, 1);
            i++;
        }
    }
}

int main(int argc, char **argv)
{
    if (argc < 3)
        input_error(argv[0], "", 1);
    else if (ft_strcmp(argv[1], "-c") != 0)
        input_error(argv[0], "", 2);
    else if (!ft_is_numeric(argv[2]))
        input_error(argv[0], argv[2], 3);
    else
        ft_tail(argc, argv);
    return (0);
}