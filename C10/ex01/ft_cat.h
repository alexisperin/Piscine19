/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:49:04 by aperin            #+#    #+#             */
/*   Updated: 2022/09/28 11:09:03 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# define BUF_SIZE 1000
# define STDIN 0
# define STDOUT 1
# define STDERR 2

void	ft_putstr(char *str, int output, int len);
void	ft_cat(char *prog_name, char *filename);
void	ft_stdin(void);
int		is_single_dash(char *str);

#endif
