/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 17:43:42 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/25 11:37:06 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

char	*ft_putnbr_base(int nbr, char *base)
{
	int			lengh;
	long int	nb;
	char *str;

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
	str = base[nb % lengh];
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int nb;
	char *str;
	int lenght;

	nb = 0;
	lenght = ft_strlen(nbr);
	if (error_base(lenght, base_from) == 1)
		return (NULL);
}
