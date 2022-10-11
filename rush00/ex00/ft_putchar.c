/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuethan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:21:55 by msuethan          #+#    #+#             */
/*   Updated: 2022/10/08 23:31:22 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	if (*str != '\0')
	{
		return (1 + ft_strlen(++str));
	}
	return (0);
}

int	ft_strtoint(char *str)
{
	int	i;
	int	res;
	int	str_len;

	res = 0;
	str_len = ft_strlen(str);
	i = -1;
	while (++i < str_len)
	{
		if (*(str + i) < '0' || *(str + i) > '9')
		{
			return (0);
		}
		res = res * 10 + (*(str + i) - '0');
	}
	return (res);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
