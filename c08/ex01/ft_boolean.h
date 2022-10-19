/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:10:15 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/19 19:25:57 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum t_bool
{
	FALSE,
	TRUE
}	t_bool;

# define EVEN(nbr) ((nbr % 2 == 0) ? TRUE : FALSE)

# define TRUE 1
# define FALSE 0
# define SUCCESS 1

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

#endif
