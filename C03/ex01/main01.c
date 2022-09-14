/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:56:37 by aperin            #+#    #+#             */
/*   Updated: 2022/09/14 12:00:10 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char s1[] = "Hello how are you ?";
	char s2[] = "Hello how @re you ?";

	printf("Expected: 33\n");
	printf("Result: %d\n", ft_strncmp(s1, s2, 20));
	printf("Expected: 0\n");
	printf("Result: %d\n", ft_strncmp(s1, s2, 5));
}
