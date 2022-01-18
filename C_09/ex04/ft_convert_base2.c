/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 17:54:10 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/25 11:37:16 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
	if (nbr <= 1)
		return (1);
	while (base[i] != '\0')
	{
		j = i + 1;
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

int	check_base(char p, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == p)
			return (1);
		i++;
	}
	return (0);
}

int	check_negative(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	if (count % 2 == 1)
		return (-1);
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	lengh_base;
	int	i;
	int	negative;
	int	nbr;
	int	s;

	s = 0;
	nbr = 0;
	negative = check_negative(str);
	lengh_base = ft_strlen(base);
	if (error_base(lengh_base, base) == 1)
		return (0);
	while ((str[s] >= 9 && str[s] <= 13) || str[s] == ' '
		|| str[s] == '+' || str[s] == '-')
		s++;
	while (check_base(str[s], base) && str[s])
	{
		i = -1;
		while (base[++i] != '\0')
			if (str[s] == base[i])
				nbr = nbr * lengh_base + i;
		s++;
	}
	return (nbr * negative);
}
