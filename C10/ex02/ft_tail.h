/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperin <aperin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:11:50 by aperin            #+#    #+#             */
/*   Updated: 2022/09/29 12:53:49 by aperin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H
# define STDIN 0
# define STDOUT 1
# define STDERR 2

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <errno.h>
# include <string.h>
# include <libgen.h>

void	ft_putstr(char *str, int output, int len);
int		ft_strcmp(char *s1, char *s2);
int		ft_is_numeric(char *str);
int		ft_atoi(char *str);
char	*ft_strcat_tail(char *dest, char *src, int n, int src_size);

void	display_error(char *prog_name, char *filename);
void	input_error(char *prog_name, char *filename, int error);
void	display_header(char *filename);

void	read_file(int fd, int n);
void	display_file(char *prog_name, char *filename, int n);

#endif
