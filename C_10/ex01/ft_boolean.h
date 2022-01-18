/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 10:03:39 by mberthoi          #+#    #+#             */
/*   Updated: 2021/07/25 14:57:08 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# define SUCCESS 0

# define FALSE 0

# define TRUE 1

# define EVEN(a) (a % 2 ? 0 : 1)

# define EVEN_MSG "I have an even number of arguments.\n"

# define ODD_MSG "I have an odd number of arguments.\n"

# include <unistd.h>

typedef int	t_bool;

#endif
