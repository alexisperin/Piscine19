/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 09:29:17 by aperin            #+#    #+#             */
/*   Updated: 2022/09/11 14:02:33 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char str1[] = "hello how are you ?";
	char str2[] = "HElLO HoW ARE yOU ?";

	
	printf("hello how are you ?: %s\n", ft_strupcase(str1));
	printf("HElLO HoW ARE yOU ?: %s\n", ft_strupcase(str2));
}
*/