/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:56:37 by aperin            #+#    #+#             */
/*   Updated: 2022/09/13 11:45:32 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcat(char *s1, char *s2);

int main(void)
{
	char s1[] = "Hello";
	char s2[] = " how are you ?";

	printf("Source: %s\n", s1);
	printf("Destination: %s\n", s2);
    ft_strcat(s1, s2);
	printf("Result: %s\n", s1);
}
