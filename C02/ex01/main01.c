/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:20:20 by aperin            #+#    #+#             */
/*   Updated: 2022/09/12 12:13:12 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char src[] = "Hello, how are you ?";
	char dest[21];

	ft_strncpy(dest, src, 21);
	printf("Source:\n    %s\n", src);
	printf("Destination:\n    %s\n", dest);
}
