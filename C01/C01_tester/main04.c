/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:10:16 by aperin            #+#    #+#             */
/*   Updated: 2022/09/09 14:29:17 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main()
{
	int *a, *b;
	int va, vb;

	va = 17;
	vb = 3;
	a = &va;
	b = &vb;
	printf("%d  %d\n", va, vb);
	ft_ultimate_div_mod(a, b);
	printf("%d  %d\n", va, vb);

	return 0;
}
