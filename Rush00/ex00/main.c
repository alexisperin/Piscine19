/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:12:24 by aperin            #+#    #+#             */
/*   Updated: 2022/09/10 12:26:21 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	main(void)
{
	rush(5, 5);
	rush(-5, 5);
	rush(5, -5);
	rush(0, 5);
	rush(5, 0);
	rush(1, 1);
	rush(1, 5);
	rush(5, 1);
	return (0);
}
