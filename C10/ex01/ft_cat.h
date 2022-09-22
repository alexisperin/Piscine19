/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:49:04 by aperin            #+#    #+#             */
/*   Updated: 2022/09/22 16:49:07 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# define BUF_SIZE 1000
# define STDIN 0
# define STDOUT 1
# define STDERR 2

void	ft_putstr(char *str, int output, int len);
int		is_single_dash(char *str);
void    ft_cat(char *prog_name, char *filename);
void	ft_stdin(void);

#endif
