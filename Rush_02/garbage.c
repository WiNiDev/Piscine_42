/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rabbishe.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 19:05:55 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/24 19:09:52 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	garbage_for_line(char *str, t_rush *box, int i, int j)
{
	if (str[i - 1] == box->res[1] && str[i] != box->res[2])
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
		find_numbers_check_unit(str, box);
	}
}
