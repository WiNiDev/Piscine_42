/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 10:22:29 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/12 12:12:31 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*one;
	char	*two;

	i = 0;
	one = "0123456789ABCDEF";
	two = "0123456789ABCDEF";
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			ft_strlowcase(str);
			str[i] = str[i] - 32;
			i++;
		}
	}
	i++;
}
