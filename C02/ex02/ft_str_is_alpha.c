/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 09:29:17 by aperin            #+#    #+#             */
/*   Updated: 2022/09/11 14:02:33 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main(void)
{
	char str1[] = "Hello";
	char str2[] = "Hello 3 how are you ?";
	char str3[] = "";

	
	printf("\"Hello\": %d\n", ft_str_is_alpha(str1));
	printf("\"Hello 3 how are you ?\": %d\n", ft_str_is_alpha(str2));
	printf("\"\": %d\n", ft_str_is_alpha(str3));
}
*/