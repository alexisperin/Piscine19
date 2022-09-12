/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:15:34 by aperin            #+#    #+#             */
/*   Updated: 2022/09/12 12:16:54 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	char str1[] = "Hello";
	char str2[] = "Hello 3 how are you ?";
	char str3[] = "";

	
	printf("\"Hello\": %d\n", ft_str_is_alpha(str1));
	printf("\"Hello 3 how are you ?\": %d\n", ft_str_is_alpha(str2));
	printf("\"\": %d\n", ft_str_is_alpha(str3));
	return (0);
}
