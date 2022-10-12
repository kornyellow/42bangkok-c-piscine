/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:16:02 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/11 23:18:36 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);
/*
#include <stdio.h>
int main()
{
	char str[] = "kornyellow";
	printf("%d\n", ft_strlen(str));
	return 0;
}
*/

int	ft_strlen(char *str)
{
	int	i;

	if (*str == 0)
		return (0);
	i = 0;
	while (*str != 0)
	{
		str ++;
		i ++;
	}
	return (i);
}
