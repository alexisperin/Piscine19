/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:51:01 by aperin            #+#    #+#             */
/*   Updated: 2022/09/09 14:03:18 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main()
{
	int a = 17, b = 3, d = 0, m = 0;
	int *div, *mod;

	div = &d;
	mod = &m;
	printf("a = %d, b = %d\n", a, b);
	ft_div_mod(a, b, div, mod);
	printf("%d  %d\n", d, m);
}
