/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 19:09:44 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/13 19:36:27 by mberthoi         ###   ########lyon.fr   */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	value_src;
	unsigned int	value_dest;
	int				y;
	unsigned int	x;	

	value_src = ft_strlen(src);
	value_dest = ft_strlen(dest);
	x = value_dest;
	y = 0;
	if (size < value_dest)
		return (value_src + size);
	if (size == 0)
		return (value_src + value_dest);
	while (src[y] != '\0' && x < (size - 1))
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (value_src + value_dest);
}
