/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 09:36:31 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/18 19:37:07 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
#define RUSH_H

#include <unistd.h>
#include <stdlib.h>

typedef struct value
{
	int	**line;
	int	**col;
	int	**game;
	int	up;
	int	down;
	int	right;
	int	left;
}value_t;

int		*set_tab(char	*str, int	index);
void	set_struct(value_t	*value, char	*str);
int		ft_strlen(char *str);
char	*ft_strdup(char *str);
void	check_game(value_t			*value);
int		backtracking(value_t		*value, int		num, int	y, int	x);
int		checik_recursive(value_t	*value, int		y, int		x);

#endif
