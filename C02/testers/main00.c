/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:56:58 by aperin            #+#    #+#             */
/*   Updated: 2022/09/12 11:14:33 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[] = "Hello, how are you ?";
	char	dest[21];

	ft_strcpy(dest, src);
	printf("Source:\n	%s\n", src);
	printf("Destination:\n	%s\n", dest);
}
