/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 09:58:54 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/24 19:08:26 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct s_rush
{
	char	*res;
}t_rush;

void	find_numbers_first(char *str, t_rush *box);
void	find_numbers_second(char *str, t_rush *box);
void	find_numbers_third(char *str, t_rush *box);
void	find_numbers_check_unit(char *str, t_rush *box);
void	find_numbers_check_special(char *str, t_rush *box);
void	find_numbers_check_hundred(char *str, t_rush *box);
void	find_numbers_hundred(char *str, t_rush *box);
int		convert_numbers(char *str);
int		convert_numbers2(char *str);
int		ft_atoi(char *str, t_rush *box);
void	garbage_for_line(char *str, t_rush *box, int i, int j);

#endif
