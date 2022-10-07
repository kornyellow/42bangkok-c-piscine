/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 02:55:47 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/07 15:39:56 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);
/*
#include <stdio.h>
int main() {
	int a = 10;
	int b = 20;
	printf("Before : a=%d b=%d\n", a, b);
	ft_swap(&a, &b);
	printf("After  : a=%d b=%d\n", a, b);
}
*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
