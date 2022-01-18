/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 14:27:51 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/25 10:13:50 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	max -= min;
	tab = malloc(sizeof(int) * max);
	if (tab == NULL)
		return (NULL);
	while (i < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
