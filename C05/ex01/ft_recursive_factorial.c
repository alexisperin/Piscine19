/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:06:05 by aperin            #+#    #+#             */
/*   Updated: 2022/09/15 11:06:13 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
		factorial *= ft_recursive_factorial(nb - 1);
	return (factorial);
}
