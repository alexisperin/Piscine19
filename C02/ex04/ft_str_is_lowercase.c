/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 09:29:17 by aperin            #+#    #+#             */
/*   Updated: 2022/09/11 14:02:33 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main(void)
{
	char str1[] = "hello";
	char str2[] = "heLlo !";
	char str3[] = "";

	
	printf("\"hello\": %d\n", ft_str_is_lowercase(str1));
	printf("\"heLlo !\": %d\n", ft_str_is_lowercase(str2));
	printf("\"\": %d\n", ft_str_is_lowercase(str3));
}
*/