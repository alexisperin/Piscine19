/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 12:04:54 by aperin            #+#    #+#             */
/*   Updated: 2022/09/12 09:57:22 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
/*
int	main(void)
{
	printf("Expected:\n5, 15\n");
	printf("Result:\n%d, %d\n", ft_strlen("Hello"), ft_strlen("Comment ca va ?"));
	return (0);
}
*/
