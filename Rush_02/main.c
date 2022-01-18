/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 09:46:06 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/24 18:51:50 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	check_str(char *str, t_rush *box)
{
	if (ft_strlen(box->res) < 2)
		find_numbers_first(str, box);
	else if (ft_strlen(box->res) < 3 && convert_numbers(box->res) < 20)
		find_numbers_second(str, box);
	else if (ft_strlen(box->res) < 3)
		find_numbers_third(str, box);
	else if (ft_strlen(box->res) < 4)
		find_numbers_hundred(str, box);
	else
		return ;
}

int	main(int ac, char **av)
{
	char	*str;
	t_rush	box;
	int		fd;

	str = malloc(sizeof(char) * 690);
	box.res = malloc(sizeof(char) * 200);
	fd = open("numbers.dict.txt", O_RDWR);
	if (fd < 0)
		return (0);
	read(fd, str, 690);
	if (ac == 2)
	{
		if (ft_atoi(av[1], &box) == 1)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		ft_atoi(av[1], &box);
		check_str(str, &box);
	}
	return (0);
}
