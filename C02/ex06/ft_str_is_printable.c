/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 09:29:17 by aperin            #+#    #+#             */
/*   Updated: 2022/09/11 14:02:33 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main(void)
{
	char str1[] = "Hello how are you ?";
	char str2[] = "Hello \n how are you ?";
	char str3[] = "";

	
	printf("\"Hello how are you ?\": %d\n", ft_str_is_printable(str1));
	printf("\"Hello \\n how are you ?\": %d\n", ft_str_is_printable(str2));
	printf("\"\": %d\n", ft_str_is_printable(str3));
}
*/