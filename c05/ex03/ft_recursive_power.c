/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:20:37 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/19 18:41:43 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power);
/*
#include <stdio.h>
#include <math.h>
int main()
{
	printf("Expect: 2^0 = %d\n", (int) pow(2, 0));
	printf("Result: 2^0 = %d\n", ft_recursive_power(2, 0));
	printf("Expect: 2^5 = %d\n", (int) pow(2, 5));
	printf("Result: 2^5 = %d\n", ft_recursive_power(2, 5));
	printf("Expect: -2^10 = 1024\n");
	printf("Result: -2^10 = %d\n", ft_recursive_power(-2, 10));
	printf("Expect: -5^9 = -1953125\n");
	printf("Result: -5^9 = %d\n", ft_recursive_power(-5, 9));
	printf("Expect: 10^-1 = 0\n");
	printf("Result: 10^-1 = %d\n", ft_recursive_power(10, -1));
	printf("Expect: 0^0 = 1\n");
	printf("Result: 0^0 = %d\n", ft_recursive_power(0, 0));
	return 0;
}
*/

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
