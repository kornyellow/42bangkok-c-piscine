/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:39:42 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/07 13:48:57 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);
/*
#include <stdio.h>
int main() {
	int div = 0;
	int mod = 0;
	printf("Before : div=%d mod=%d\n", div, mod);
	ft_div_mod(21, 10, &div, &mod);
	printf("After  : div=%d mod=%d\n", div, mod);
	return 0;
}
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
