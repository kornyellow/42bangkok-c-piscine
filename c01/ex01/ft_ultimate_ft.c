/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 02:45:44 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/07 13:50:03 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr);
/*
#include <stdio.h>
int main() {
	int a = 1;
	int *b = &a;
	int **c = &b;
	int ***d = &c;
	int ****e = &d;
	int *****f = &e;
	int ******g = &f;
	int *******h = &g;
	int ********j = &h;
	int *********i = &j;
	printf("Before : a=%d\n", a);
	ft_ultimate_ft(i);
	printf("After  : a=%d\n", a);
	return 0;
}
*/

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
