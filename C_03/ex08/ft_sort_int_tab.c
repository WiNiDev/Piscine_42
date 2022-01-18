/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:45:35 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/11 10:09:54 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	e;

	i = 0;
	temp = 0;
	e = 0;
	while (i < size)
	{
		e = 0;
		while (e < size)
		{
			if (tab[i] < tab[e])
			{
				temp = tab[i];
				tab[i] = tab[e];
				tab[e] = temp;
			}
			e++;
		}
		i++;
	}
}
