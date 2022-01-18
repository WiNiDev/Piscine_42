/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 11:08:16 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/18 19:03:09 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	check_game_three(value_t *value, int i, int j)
{
	if (value->col[value->left][i] == 4)
	{
		value->game[i][0] = 1;
		value->game[i][1] = 2;
		value->game[i][2] = 3;
		value->game[i][3] = 4;
	}
	else if (value->col[value->right][i] == 4)
	{
		value->game[i][0] = 4;
		value->game[i][1] = 3;
		value->game[i][2] = 2;
		value->game[i][3] = 1;
	}
}

void	check_game_two(value_t *value, int i, int j)
{
	if (value->line[value->up][i] == 4)
	{
		value->game[0][i] = 1;
		value->game[1][i] = 2;
		value->game[2][i] = 3;
		value->game[3][i] = 4;
	}
	else if (value->line[value->down][j] == 4)
	{
		value->game[0][i] = 4;
		value->game[1][i] = 3;
		value->game[2][i] = 2;
		value->game[3][i] = 1;
	}
}

void	check_game(value_t *value)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (value->line[value->up][i] != '\0'
			&& value->col[value->left][i] != '\0'
			&& value->line[value->down][i] != '\0'
			&& value->col[value->right][i] != '\0')
	{
		check_game_two(value, i, j);
		check_game_three(value, i, j);
		if (value->line[value->up][i] == 1)
			value->game[0][i] = 4;
		else if (value->line[value->down][i] == 1)
			value->game[3][i] = 4;
		else if (value->col[value->left][i] == 1)
			value->game[i][0] = 4;
		else if (value->col[value->right][i] == 1)
			value->game[i][3] = 4;
		i++;
		j++;
	}
}

/*
int backtracking(value_t *value, int num, int y, int x)
{
	while (x < 4)
	{
		if (value->game[y][x] == num)
			return (0);
		x++;
	}
	x = 0;
	while (y < 4)
	{
		if (value->game[x][y] == num)
			return (0);
		y++;
	}
	return (1);
}

int check_recursive(value_t *value, int y, int x)
{
	int num = 1;

	if (x == 3 )
	{
		y++;
		x = 0;
	}
	while (num <= 4)
	{
		if (backtracking(value, num, y, x) == 1)
		{
			value->game[y][x] = num;
			if (check_recursive(value, y, x++) == 1)
				return (1);
		}
		value->game[y][x] = 0;
		num++;
	}
	return (0);
}*/
