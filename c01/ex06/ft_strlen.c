/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:57:23 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/07 15:40:32 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);
/*
#include <stdio.h>
int main() {
	char str[] = "Hello, World!";
	printf("\"%s\" = %d\n", str, ft_strlen(str));
	return 0;
}
*/

int	ft_strlen(char *str)
{
	if (*str != '\0')
	{
		return (1 + ft_strlen(++str));
	}
	return (0);
}
