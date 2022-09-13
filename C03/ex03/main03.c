/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:51:58 by aperin            #+#    #+#             */
/*   Updated: 2022/09/13 12:08:29 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncat(char *s1, char *s2, unsigned int nb);

int main(void)
{
	char s1[] = "Hello";
	char s2[] = " how are you ?";

	printf("Source: %s\n", s1);
	printf("Destination: %s\n", s2);
    ft_strncat(s1, s2, 20);
	printf("Result: %s\n", s1);
}
