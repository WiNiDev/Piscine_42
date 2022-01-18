/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 10:37:19 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/16 12:02:07 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		res;
	float	x;
	float	y;
	float	e;

	x = nb;
	y = 1;
	e = 0.1;
	while ((x - y) > e)
	{
		x = (x + y) / 2;
		y = (nb / x);
	}
	res = x;
	if ((res * res) == nb)
		return (res);
	return (0);
}