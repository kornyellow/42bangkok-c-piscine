/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:20:37 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/12 17:29:17 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);
/*
#include <stdio.h>
int main()
{
	printf("2 power of -1 = %d\n", ft_iterative_power(2, -1));
	printf("0 power of 0 = %d\n", ft_iterative_power(0, 0));
	printf("1 power of 0 = %d\n", ft_iterative_power(1, 0));
	printf("2 power of 0 = %d\n", ft_iterative_power(2, 0));
	printf("2 power of 1 = %d\n", ft_iterative_power(2, 1));
	printf("2 power of 2 = %d\n", ft_iterative_power(2, 2));
	printf("2 power of 3 = %d\n", ft_iterative_power(2, 3));
	printf("-2 power of 1 = %d\n", ft_iterative_power(-2, 1));
	printf("-2 power of 2 = %d\n", ft_iterative_power(-2, 2));
	printf("-2 power of 3 = %d\n", ft_iterative_power(-2, 3));
	return 0;
}
*/

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0 || (nb == 0 && power == 0))
		return (0);
	if (power == 0)
		return (1);
	res = nb;
	while (power-- != 1)
		res *= nb;
	return (res);
}
