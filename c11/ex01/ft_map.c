/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 01:17:00 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/21 02:16:58 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*res;
	int	i;

	if (f == 0)
		return (0);
	res = malloc(sizeof(int *) * length);
	i = -1;
	while (i++ < length)
		res[i] = f(tab[i]);
	return (res);
}

int	ft_abs(int nbr)
{
	if (nbr >= 0)
		return (nbr);
	return (nbr * -1);
}
/*
#include <stdio.h>
int	main(void)
{
	int tab[10] = {0, -1, 2, -3, 4, -5, 6, -7, 8, 9};
	int *res;
	res = ft_map(tab, 10, &ft_abs);

	printf("Result : ");
	for (int i = 0; i < 10; i++)
		printf("%d ", res[i]);
	printf("\n");

	free(res);
	return (0);
}
*/
