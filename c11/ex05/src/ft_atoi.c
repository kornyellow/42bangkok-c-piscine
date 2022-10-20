/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:28:27 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/21 02:33:48 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_atoi.h"

int	ft_char(char c)
{
	return (c != '+' && c != ' ' && c != '\t' && \
			c != '\n' && c != '\v' && c != '\f' && c != '\r');
}

int	ft_convert_to_number(int nbr, char c, int *is_start)
{
	*is_start = 1;
	return (nbr * 10 + (c - '0'));
}

int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	res;
	int	minus_sign;
	int	is_start;

	res = 0;
	is_start = 0;
	minus_sign = 1;
	while (*str != 0)
	{
		if (!is_start || ft_is_number(*str))
		{
			if (*str >= '0' && *str <= '9')
				res = ft_convert_to_number(res, *str, &is_start);
			else if (*str == '-')
				minus_sign *= -1;
			else if ((*str == ' ' && ft_is_number(*(str + 1))) || ft_char(*str))
				return (res * minus_sign);
		}
		else if (*str < '0' || *str >= '9')
			return (res * minus_sign);
		str ++;
	}
	return (res * minus_sign);
}
