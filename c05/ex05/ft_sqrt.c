/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:42:17 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/12 19:47:07 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);
/*
#include <stdio.h>
int main()
{
	printf("Square root of -2 is = %d\n", ft_sqrt(-2));
	printf("Square root of -1 is = %d\n", ft_sqrt(-1));
	printf("Square root of 0 is = %d\n", ft_sqrt(0));
	printf("Square root of 2 is = %d\n", ft_sqrt(2));
	printf("Square root of 4 is = %d\n", ft_sqrt(4));
	printf("Square root of 8 is = %d\n", ft_sqrt(8));
	printf("Square root of 16 is = %d\n", ft_sqrt(16));
	printf("Square root of 25 is = %d\n", ft_sqrt(25));
	printf("Square root of 400 is = %d\n", ft_sqrt(400));
	printf("Square root of 62500 is = %d\n", ft_sqrt(62500));
	printf("Square root of 2147302921 is = %d\n", ft_sqrt(2147302921));
	printf("Square root of 2147395600 is = %d\n", ft_sqrt(2147395600));
	printf("Square root of 2147483647 is = %d\n", ft_sqrt(2147483647));
	return 0;
}
*/

int	ft_sqrt(int nb)
{
	int	half_nb;
	int	to_find;

	if (nb <= 0 || nb > 2147395600)
	{
		return (0);
	}
	half_nb = nb / 2;
	to_find = 1;
	while (to_find <= 46340)
	{
		if (to_find * to_find > nb)
			break ;
		if (to_find * to_find == nb)
			return (to_find);
		to_find ++;
	}
	return (0);
}
