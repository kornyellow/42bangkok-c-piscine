/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:06:33 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/16 03:49:08 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARG_H
# define ARG_H

# include <unistd.h>
# include "includes.h"
# include "std.h"

int	arg_argument_check(char **argv, int size)
{
	char	*str;
	int		len;

	len = (size * 4 * 2) - 1;
	str = *(argv + 1);
	if (std_strlen(str) != len)
		return (ERROR_ARGUMENT_INVALID);
	else
	{
		while (1)
		{
			if (*(str + 1) != '\0')
				if (!((*str >= '1' && *str <= '0' + size) && *(str + 1) == ' '))
					return (ERROR_ARGUMENT_INVALID);
			if (!(*str >= '1' && *str <= '0' + size))
				return (ERROR_ARGUMENT_INVALID);
			str += 2;
			if (*(str - 1) == 0)
				break ;
		}
	}
	return (SUCCESS);
}

void	arg_show_error(int error)
{
	if (error == ERROR_ARGUMENT_COUNT)
		std_putstr("ERROR: Please enter one argument.\n");
	if (error == ERROR_ARGUMENT_INVALID)
		std_putstr("ERROR: Please enter valid argument.\n");
	if (error == ERROR_NO_SOLUTION)
		std_putstr("Error\n");
}

#endif
