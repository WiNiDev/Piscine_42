/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 11:56:39 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/13 21:45:16 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	check_str(char *str, char *to_find, int i)
{
	int	y;

	y = 0;
	while (str[i] == to_find[y])
	{
		if (to_find[y + 1] == 0)
			return (1);
		i++;
		y++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (*to_find == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (check_str(str, to_find, i) == 1)
				return (str + i);
		}
		i++;
	}
	return (0);
}
