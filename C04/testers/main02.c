/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:29:59 by aperin            #+#    #+#             */
/*   Updated: 2022/09/14 12:33:10 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putnbr(int nb);

int main()
{
	while(1)
	{
		int nb = 0;
		printf("Enter a number: \n");
		scanf("%d", &nb);
		ft_putnbr(nb);
		printf("\n");
		printf("\n");
	}

	return 0;
}
