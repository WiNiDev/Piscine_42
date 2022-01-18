/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afort <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 15:37:35 by afort             #+#    #+#             */
/*   Updated: 2021/07/11 18:32:42 by afort            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	draw_line(int x, int y, int ix, int iy)
{
	if (ix == 0 && iy == 0)
		ft_putchar('o');
	else if (ix == x - 1 && iy == 0)
		ft_putchar('o');
	else if (ix == 0 && iy == y - 1)
		ft_putchar('o');
	else if (ix == x - 1 && iy == y - 1)
		ft_putchar('o');
	else if (iy == y - 1 || iy == 0)
		ft_putchar('-');
	else if (ix == 0 || ix == x - 1)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	draw(int x, int y)
{
	int	ix;
	int	iy;

	ix = 0;
	iy = 0;
	while (iy < y)
	{
		while (ix < x)
		{
			draw_line(x, y, ix, iy);
			ix++;
		}
		ft_putchar('\n');
		ix = 0;
		iy++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(2, "La taille ne peut pas etre inferieure a 1\n", 41);
	}
	else
	{
		draw(x, y);
	}
}
