/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 14:18:58 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/26 16:27:16 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*cpy;
	int		i;

	cpy = malloc((sizeof(char) * ft_strlen(str)) + 1);
	if (cpy == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*struc;
	int			i;

	i = 0;
	struc = malloc((ac + 1) * sizeof(t_stock_str));
	if (ac < 0)
		ac = 0;
	while (i < ac)
	{
		struc[i].size = ft_strlen(av[i]);
		struc[i].str = av[i];
		struc[i].copy = ft_strdup(av[i]);
		i++;
	}
	struc[i].str = 0;
	return (struc);
}
