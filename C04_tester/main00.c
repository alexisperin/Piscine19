/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:27:05 by aperin            #+#    #+#             */
/*   Updated: 2022/09/14 12:28:55 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
	char str1[] = "Hello";
	char str2[] = "Comment ca va ?";

	printf("Expected:\n");
	printf("5, 15\n");
	printf("Result:\n");
	printf("%d, %d\n", ft_strlen(str1), ft_strlen(str2));
}
