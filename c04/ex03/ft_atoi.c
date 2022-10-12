/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:28:27 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/11 23:55:33 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_atoi("      ---   +--+1234ab567"));
	return 0;
}
*/

int	ft_atoi(char *str)
{
	int	res;
	int	minus_sign;

	res = 0;
	minus_sign = 1;
	while (*str != 0)
	{
		if (*str >= '0' && *str <= '9')
		{
			res = res * 10 + (*str - '0');
		}
		else if (*str == '-')
		{
			minus_sign *= -1;
		}
		else if (*str != '+' && *str != ' ')
		{
			return (res * minus_sign);
		}
		str ++;
	}
	return (res * minus_sign);
}
