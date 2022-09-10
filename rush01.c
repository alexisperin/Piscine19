/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:12:21 by aperin            #+#    #+#             */
/*   Updated: 2022/09/10 12:30:43 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	show_special_line(int x, int position)
{
	int	h_cnt;

	if (position == 0)
		ft_putchar('/');
	else
		ft_putchar('\\');
	h_cnt = 1;
	while (h_cnt < x - 1)
	{
		ft_putchar('*');
		h_cnt++;
	}
	if (x > 1)
	{
		if (position == 0)
			ft_putchar('\\');
		else
			ft_putchar('/');
	}
	ft_putchar('\n');
}

void	show_mdl_line(int x)
{
	int	h_cnt;

	ft_putchar('*');
	h_cnt = 1;
	while (h_cnt < x - 1)
	{
		ft_putchar(' ');
		h_cnt++;
	}
	if (x > 1)
		ft_putchar('*');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	v_cnt;

	v_cnt = 1;
	if (y > 0 && x > 0)
	{
		show_special_line(x, 0);
		while (v_cnt < y - 1)
		{
			show_mdl_line(x);
			v_cnt++;
		}
		if (y >= 2)
			show_special_line(x, 1);
	}
}
