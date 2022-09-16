/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:36:55 by aperin            #+#    #+#             */
/*   Updated: 2022/09/15 12:34:13 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index);

int	main(void)
{
	printf("fib -4: %d\n", ft_fibonacci(-4));
	printf("fib 0: %d\n", ft_fibonacci(0));
	printf("fib 1: %d\n", ft_fibonacci(1));
	printf("fib 2: %d\n", ft_fibonacci(2));
	printf("fib 3: %d\n", ft_fibonacci(3));
	printf("fib 10: %d\n", ft_fibonacci(10));
}
