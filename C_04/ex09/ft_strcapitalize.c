/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 13:13:32 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/12 12:05:53 by mberthoi         ###   ########lyon.fr   */
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

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	str = ft_strlowcase(str);
	if (str == '\0')
		return (str);
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if ((str[i - 1] < 97 || str[i - 1] > 122) && (str[i - 1] < 48
				|| str[i - 1] > 57) && (str[i - 1] < 65 || str[i - 1] > 90))
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
				i++;
			}
		}
		i++;
	}
	return (str);
}
