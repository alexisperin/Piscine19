/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:51:48 by aperin            #+#    #+#             */
/*   Updated: 2022/09/16 13:35:38 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	printf("0: %d\n", ft_is_prime(0));
	printf("1: %d\n", ft_is_prime(1));
	printf("2: %d\n", ft_is_prime(2));
	printf("3: %d\n", ft_is_prime(3));
	printf("4: %d\n", ft_is_prime(4));
	printf("13: %d\n", ft_is_prime(13));
	printf("-1: %d\n", ft_is_prime(-1));
	printf("43: %d\n", ft_is_prime(43));
	printf("2147483647: %d\n", ft_is_prime(2147483647));
}
