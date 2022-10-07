/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:54:12 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/07 15:40:17 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
/*
#include <stdio.h>
int main() {
	char str[] = "Hello, World!\n";
	ft_putstr(str);
	return 0;
}
*/

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str++, 1);
	}
}
