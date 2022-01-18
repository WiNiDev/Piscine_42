/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 18:17:18 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/15 15:12:56 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	error_base(int nbr, char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (nbr <= 1)
		return (1);
	while (base[i] != '\0')
	{
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			lengh;
	long int	nb;

	nb = nbr;
	lengh = ft_strlen(base);
	if (error_base(lengh, base) == 1)
		return ;
	while (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= lengh)
		ft_putnbr_base(nb / lengh, base);
	ft_putchar(base[nb % lengh]);
}
