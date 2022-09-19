/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:25:32 by aperin            #+#    #+#             */
/*   Updated: 2022/09/19 10:27:14 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char s1[] = "are";
	char s2[] = "Hello how are you ?";

	printf("String: %s\n", s2);
	printf("To find: %s\n", s1);
	printf("Result: %s\n", ft_strstr(s2, s1));
}
