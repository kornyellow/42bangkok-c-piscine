/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:28:58 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/19 17:19:16 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);
/*
#include <stdio.h>
int main()
{
	printf("Expect: 13 => 1\n");
	printf("Result: 13 => %d\n", ft_is_prime(5));
	printf("Expect: 97 => 1\n");
	printf("Result: 97 => %d\n", ft_is_prime(97));
	printf("Expect: 1 => 0\n");
	printf("Result: 1 => %d\n", ft_is_prime(1));
	printf("Expect: 4 => 0\n");
	printf("Result: 4 => %d\n", ft_is_prime(4));
	printf("Expect: 100 => 0\n");
	printf("Result: 100 => %d\n", ft_is_prime(100));
	printf("Expect: 50021 => 1\n");
	printf("Result: 50021 => %d\n", ft_is_prime(50021));
	printf("Expect: 50022 => 0\n");
	printf("Result: 50022 => %d\n", ft_is_prime(50022));
	printf("Expect: 50023 => 1\n");
	printf("Result: 50023 => %d\n", ft_is_prime(50023));
	printf("Expect: -1 => 0\n");
	printf("Result: -1 => %d\n", ft_is_prime(-1));
	return 0;
}
*/

int	ft_is_prime(int nb)
{
	int	prime;
	int	i;

	if (nb <= 0)
		return (0);
	i = 3;
	if (nb % 2 == 0)
		prime = nb == 2;
	else
		prime = nb != 1;
	while (prime && i <= nb / i)
	{
		prime = nb % i != 0;
		i += 2;
	}
	return (prime);
}
