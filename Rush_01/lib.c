/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 18:52:02 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/18 19:29:58 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

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
	int		j;

	cpy = malloc((sizeof(char) * ft_strlen(str)) + 1);
	if (cpy == NULL)
		return (0);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 49 && str[i] <= 52)
		{
			cpy[j] = str[i];
			j++;
		}
		i++;
	}
	cpy[j] = '\0';
	return (cpy);
}

void	set_struct(value_t *value, char *str)
{
	value->up = 0;
	value->down = 1;
	value->left = 0;
	value->right = 1;
	value->line = malloc(sizeof(int *) * 2);
	value->col = malloc(sizeof(int *) * 2);
	value->line[value->up] = set_tab(str, 0);
	value->line[value->down] = set_tab(str, 4);
	value->col[value->left] = set_tab(str, 8);
	value->col[value->right] = set_tab(str, 12);
}
