/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:32:59 by aperin            #+#    #+#             */
/*   Updated: 2022/09/16 14:35:46 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("0: %d\n", ft_find_next_prime(0));
	printf("4: %d\n", ft_find_next_prime(4));
	printf("7: %d\n", ft_find_next_prime(7));
	printf("40: %d\n", ft_find_next_prime(40));
	printf("-5: %d\n", ft_find_next_prime(-5));
	printf("2147483647: %d\n", ft_find_next_prime(2147483647));
}
