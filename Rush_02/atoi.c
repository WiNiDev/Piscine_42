/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:42:48 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/24 18:46:55 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	convert_numbers(char *str)
{
	int	i;
	int	res;
	int	count;

	i = 0;
	res = 0;
	count = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	if (count % 2 == 1)
		return (res * -1);
	return (res);
}

int	convert_numbers2(char *str)
{
	int	i;
	int	res;
	int	count;

	i = 0;
	res = 0;
	count = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	if (count % 2 == 1)
		return (res * -1);
	return (res);
}

int	ft_atoi(char *str, t_rush *box)
{
	int	k;
	int	i;

	k = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '+')
		i++;
	if (str[i] == '-')
		return (1);
	while (str[i] >= '0' && str[i] <= '9')
	{
		box->res[k] = str[i];
		i++;
		k++;
	}
	if (str[i] == '.')
		return (1);
	return (0);
}
