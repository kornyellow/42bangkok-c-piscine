/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_std.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 07:46:16 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/23 09:37:01 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ky_lib.h"

void	ky_putchar(char c)
{
	write(1, &c, 1);
}

void	ky_putstrs(char *str, int size)
{
	while (*str != 0 && size-- != 0)
		ky_putchar(*str++);
}

void	ky_putstr(char *str)
{
	while (*str != 0)
		ky_putchar(*str++);
}
