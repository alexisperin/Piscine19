/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:06:20 by aperin            #+#    #+#             */
/*   Updated: 2022/09/13 11:06:34 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char s1[] = "Hello how 1re you ?";
	char s2[] = "Hello how @re you ?";

	printf("Expected: -15\n");
	printf("Result: %d\n", ft_strcmp(s1, s2));
}
