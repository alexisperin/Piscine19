/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:37:59 by aperin            #+#    #+#             */
/*   Updated: 2022/09/22 13:38:01 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);

int		plus(int a, int b);
int		minus(int a, int b);
int		div(int a, int b);
int		mul(int a, int b);
int		mod(int a, int b);

#endif
