/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 15:20:16 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/26 10:19:31 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_tab(char *charset, char letter)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == letter)
			return (1);
		i++;
	}
	return (0);
}

int	count_tab(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (check_tab(charset, str[i]) == 1 && str[i])
			i++;
		if (str[i] != '\0')
			count++;
		while (check_tab(charset, str[i]) == 0 && str[i])
			i++;
	}
	return (count);
}

int	count_cara(char *str, char *charset, int index)
{
	int	i;

	i = 0;
	while (str[i + index] != '\0')
	{
		if (check_tab(charset, str[i + index]) == 1)
			return (i);
		i++;
	}	
	return (i);
}

char	**fill_tab(char *str, char *charset, char **tab)
{
	int	i;
	int	e;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (check_tab(charset, str[i]) == 1 && str[i])
			i++;
		tab[count] = malloc(sizeof(char) * (count_cara(str, charset, i) + 1));
		if (tab[count] == NULL)
			return (NULL);
		e = 0;
		while (check_tab(charset, str[i]) == 0 && str[i])
		{
			tab[count][e] = str[i];
			e++;
			i++;
		}
		tab[count][e] = '\0';
		if (str[i])
			count++;
	}
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;

	tab = malloc(sizeof(char *) * (count_tab(str, charset) + 1));
	if (tab == NULL)
		return (NULL);
	tab = fill_tab(str, charset, tab);
	tab[count_tab(str, charset)] = 0;
	return (tab);
}
