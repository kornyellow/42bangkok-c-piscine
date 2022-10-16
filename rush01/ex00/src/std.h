/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:36:27 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/16 02:05:45 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STD_H
# define STD_H

# include "includes.h"

char	**std_rev_char(char **arr, unsigned int size)
{
	int		i;
	int		n;
	char	*s;

	i = 0;
	n = size;
	while (i < n / 2)
	{
		s = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = s;
		i ++;
	}
	return (arr);
}

int	std_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i ++;
	}
	return (i);
}

void	std_putchar(char c)
{
	write(1, &c, 1);
}

void	std_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i ++;
	}
}

int	*std_int_rev(int *arr)
{
	*arr = 0;
	return (0);
}

#endif
