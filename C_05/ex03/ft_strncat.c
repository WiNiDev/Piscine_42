/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 11:43:04 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/13 19:36:57 by mberthoi         ###   ########lyon.fr   */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	e;
	int				value_src;

	i = ft_strlen(dest);
	e = 0;
	value_src = i;
	while (e < nb && src[e] != '\0')
	{
		dest[i] = src[e];
		e++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
