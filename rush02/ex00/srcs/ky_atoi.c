/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:46:06 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/23 16:27:00 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ky_atoi.h"

int	ky_char(char c)
{
	return (c != '+' && c != ' ' && c != '\t' && \
			c != '\n' && c != '\v' && c != '\f' && c != '\r');
}

unsigned int	ky_convert_to_number(unsigned int nbr, char c, int *is_start)
{
	*is_start = 1;
	return (nbr * 10 + (c - '0'));
}

unsigned int	ky_atoi(char *str)
{
	unsigned int	res;
	int				is_start;

	res = 0;
	is_start = 0;
	while (*str != 0)
	{
		if (!is_start || ky_is_number(*str))
		{
			if (*str >= '0' && *str <= '9')
				res = ky_convert_to_number(res, *str, &is_start);
			else if ((*str == ' ' && ky_is_number(*(str + 1))) || ky_char(*str))
				return (res);
		}
		else if (*str < '0' || *str >= '9')
			return (res);
		str ++;
	}
	return (res);
}
