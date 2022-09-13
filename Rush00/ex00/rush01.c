/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:12:21 by aperin            #+#    #+#             */
/*   Updated: 2022/09/10 17:25:51 by yhuberla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	show_character(int position, char first, char second, char third)
{
	if (position == 0)
		ft_putchar(first);
	else if (position == 1)
		ft_putchar(second);
	else
		ft_putchar(third);
}

void	show_line(int x, int position)
{
	int	h_cnt;

	show_character(position, '/', '*', '\\');
	h_cnt = 1;
	while (h_cnt < x - 1)
	{
		show_character(position, '*', ' ', '*');
		h_cnt++;
	}
	if (x > 1)
	{
		show_character(position, '\\', '*', '/');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	v_cnt;

	v_cnt = 1;
	if (y > 0 && x > 0)
	{
		show_line(x, 0);
		while (v_cnt < y - 1)
		{
			show_line(x, 1);
			v_cnt++;
		}
		if (y >= 2)
			show_line(x, 2);
	}
}
