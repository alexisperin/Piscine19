/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopeyrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:28:40 by dopeyrat          #+#    #+#             */
/*   Updated: 2022/09/24 17:05:36 by dopeyrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_dict
{
	struct s_dict	*next;

	char			*nbr;

	char			*value;
	int				exp;
}		t_dict;

char	*ft_strdup(char *str);
char	*ft_strndup(char *str, int n);
int		ft_strlen(char *str);
int		ft_find_nl(char *str);
char	*ft_strncat_f(char *str, char *buff, int n);
int		ft_add_dict(char *str, t_dict **start_dict);
int		free_dict(t_dict *dict, char *str, int fd);
int		ft_is_num(char *str);
t_dict	*parse_dict(char *str);
int		cut_nbr(t_dict *dict, char *nbr);
int		input_error(t_dict *dict);
void	print_num(char *str, t_dict *dict, int i, int *w);
void	ft_strncpy_m(char *dst, char *src, int n);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);

#endif
