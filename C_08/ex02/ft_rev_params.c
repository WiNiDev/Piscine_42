/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:41:52 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/19 10:08:38 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		j;
	int		count;

	count = argc - 1;
	while (count > 0)
	{
		j = 0;
		while (argv[count][j] != '\0')
		{
			write(1, &argv[count][j], 1);
			j++;
		}
		write(1, "\n", 1);
		count--;
	}
	return (0);
}
