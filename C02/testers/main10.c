/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:26:26 by aperin            #+#    #+#             */
/*   Updated: 2022/09/12 17:13:36 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char src[] = "Hello, how are you ?";
	char dest[40];
	char dest2[1];

	unsigned int len = ft_strlcpy(dest, src, 40);
	printf("Source:\n    %s\n", src);
	printf("Destination:\n    %d, %s\n", len, dest);

	len = ft_strlcpy(dest2, src, 0);
	printf("Source:\n    %s\n", src);
	printf("Destination:\n    %d, %s\n", len, dest2);
}
