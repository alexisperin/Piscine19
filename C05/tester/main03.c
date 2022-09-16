/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:35:13 by aperin            #+#    #+#             */
/*   Updated: 2022/09/15 11:35:15 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main(void)
{
	printf("%d\n", ft_recursive_power(2, -2));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(2, 0));
	printf("%d\n", ft_recursive_power(3, 1));
	printf("%d\n", ft_recursive_power(3, 3));
	printf("%d\n", ft_recursive_power(-4, 3));
	return (0);
}
