/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:36:39 by aperin            #+#    #+#             */
/*   Updated: 2022/09/15 12:50:33 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("sqrt -4: %d\n", ft_sqrt(-4));
	printf("sqrt 0: %d\n", ft_sqrt(0));
	printf("sqrt 1: %d\n", ft_sqrt(1));
	printf("sqrt 2: %d\n", ft_sqrt(2));
	printf("sqrt 9: %d\n", ft_sqrt(9));
	printf("sqrt 12: %d\n", ft_sqrt(12));
	printf("sqrt 100: %d\n", ft_sqrt(100));
}
