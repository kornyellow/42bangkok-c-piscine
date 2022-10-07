/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:51:36 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/07 15:46:59 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);
/*
#include <stdio.h>
int main() {
	int a = 21;
	int b = 10;
	printf("Before : a=%d b=%d\n", a, b);
	ft_ultimate_div_mod(&div, &mod);
	printf("After  : a=%d b=%d\n", a, b);
	return 0;
}
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
