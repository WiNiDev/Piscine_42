/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:47:48 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/24 18:57:15 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	find_numbers_dizaines(char *str, t_rush *box)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < 80)
	{
		if (str[i] == box->res[1])
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

void	find_numbers_first(char *str, t_rush *box)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < 80)
	{
		if (str[i] == box->res[0])
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

void	find_numbers_second(char *str, t_rush *box)
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

void	win_lines(char *str, t_rush *box, int i, int j)
{
	if (str[i - 1] == box->res[0] && str[i] != box->res[1])
	{
		i++;
		while (str[i + j] == ':' || str[i + j] == ' ')
			j++;
		while (str[i + j] >= 'a' && str[i + j] <= 'z')
		{
			write(1, &str[i + j], 1);
			j++;
		}
		write(1, " ", 1);
		find_numbers_dizaines(str, box);
	}
}

void	find_numbers_third(char *str, t_rush *box)
{
	int	i;
	int	j;

	j = 0;
	i = 199;
	while (i < 285)
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
		win_lines(str, box, i, j);
		i++;
	}
}
