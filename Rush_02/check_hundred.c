/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_hundred.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:24:19 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/24 19:08:54 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	find_numbers_check_unit(char *str, t_rush *box)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < 80)
	{
		if (str[i] == box->res[2])
		{
			i++;
			while (str[i + j] == ':' || str[i + j] == ' ')
				j++;
			while (str[i + j] >= 'a' && str[i + j] <= 'z')
			{
				write(1, &str[i + j], 1);
				j++;
			}
		}
		i++;
	}
}

void	find_numbers_check_special(char *str, t_rush *box)
{
	int	i;
	int	j;

	j = 0;
	i = 80;
	while (i < 199)
	{
		if (str[i - 1] == box->res[0] && str[i] == box->res[1])
		{
			i++;
			while (str[i + j] == ':' || str[i + j] == ' ')
				j++;
			while (str[i + j] >= 'a' && str[i + j] <= 'z')
			{
				write(1, &str[i + j], 1);
				j++;
			}
		}
		i++;
	}
}

void	find_numbers_check_hundred(char *str, t_rush *box)
{
	int	i;
	int	j;

	j = 0;
	i = 199;
	while (i < 285)
	{
		if (str[i - 1] == box->res[1] && str[i] == box->res[2])
		{
			i++;
			while (str[i + j] == ':' || str[i + j] == ' ')
				j++;
			while (str[i + j] >= 'a' && str[i + j] <= 'z')
			{
				write(1, &str[i + j], 1);
				j++;
			}
		}
		garbage_for_line(str, box, i, j);
		i++;
	}
}

void	win_line_two(char *str, t_rush *box, int i, int j)
{
	if (str[i - 1] == box->res[0] && str[i] != box->res[1])
	{
		i++;
		while (str[i + j] == ':' || str[i + j] == ' ')
			j++;
		while (str[i + j] >= 'a' && str[i + j] <= 'z')
			j++;
		find_numbers_first(str, box);
		write(1, " ", 1);
		write(1, "hundred ", 8);
		find_numbers_check_hundred(str, box);
	}
}

void	find_numbers_hundred(char *str, t_rush *box)
{
	int	i;
	int	j;

	j = 0;
	i = 285;
	while (i < 298)
	{
		if (str[i - 2] == box->res[0] && str[i - 1] == box->res[1]
			&& str[i] == box->res[2])
		{
			i++;
			while (str[i + j] == ':' || str[i + j] == ' ')
				j++;
			while (str[i + j] >= 'a' && str[i + j] <= 'z')
			{
				write(1, &str[i + j], 1);
				j++;
			}
		}
		win_line_two(str, box, i, j);
		i++;
	}
}
