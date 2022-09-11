/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 09:29:17 by aperin            #+#    #+#             */
/*   Updated: 2022/09/11 14:02:33 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main(void)
{
	char str1[] = "HELLO";
	char str2[] = "HElLO";
	char str3[] = "";

	
	printf("\"HELLO\": %d\n", ft_str_is_uppercase(str1));
	printf("\"HElLO !\": %d\n", ft_str_is_uppercase(str2));
	printf("\"\": %d\n", ft_str_is_uppercase(str3));
}
*/