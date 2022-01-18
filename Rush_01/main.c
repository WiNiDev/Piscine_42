/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 09:35:07 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/18 19:28:45 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	*set_tab(char *str, int index)
{
	int	*tab;
	int	x;

	x = 0;
	tab = malloc(sizeof(int) * 4);
	while (x < 4)
	{
		tab[x] = str[index + x] - '0';
		x++;
	}
	return (tab);
}

void	set_game(value_t *value)
{
	int	i;
	int	j;

	i = 0;
	value->game = malloc(sizeof(int *) * 18);
	while (i < 4)
	{
		value->game[i] = malloc(sizeof(int) * 18);
		j = 0;
		while (j < 4)
		{
			value->game[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	display_game(value_t *value)
{
	int		i;
	int		j;
	char	p;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			p = value->game[i][j] + '0';
			write (1, &p, 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	CheckIfallCor(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) != 31)
		return (0);
	while (str[i])
	{
		if (i % 2 == 1 && str[i] == ' ')
			i++;
		else if (i % 2 == 0 && (str[i] >= '1' && str[i] <= '4'))
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	char	*str;
	value_t	value;

	if (ac != 2 || CheckIfallCor(av[1]) == 0)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	str = ft_strdup(av[1]);
	set_struct(&value, str);
	set_game(&value);
	check_game(&value);
	display_game(&value);
	return (0);
}
