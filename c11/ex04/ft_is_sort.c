/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 02:14:19 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/21 02:27:57 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	if (f == 0)
		return (0);
	i = -1;
	while (++i < length - 1)
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
	return (1);
}
/*
#include <stdio.h>
int	ft_compare(int a, int b)
{
	return (a - b);
}

int	main()
{
	int tab[10] = {1, 2, 2, 3, 4, 5, 6, 7, 8, 9};

	printf("Arrays : ");
	for (int i = 0; i < 10; i++)
		printf("%d ", tab[i]);
	printf("\n");

	printf("Is sorted ? : %d\n", ft_is_sort(tab, 10, &ft_compare));
}
*/
