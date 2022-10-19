/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:01:49 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/19 18:32:54 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);
int	ft_find_next_prime(int nb);
/*
#include <stdio.h>
int main()
{
	printf("Expect: -3738 => 2\n");
	printf("Result: -3738 => %d\n", ft_find_next_prime(-3738));
	printf("Expect: 0 => 2\n");
	printf("Result: 0 => %d\n", ft_find_next_prime(0));
	printf("Expect: 1 => 2\n");
	printf("Result: 1 => %d\n", ft_find_next_prime(1));
	printf("Expect: 2 => 2\n");
	printf("Result: 2 => %d\n", ft_find_next_prime(2));
	printf("Expect: 13 => 13\n");
	printf("Result: 13 => %d\n", ft_find_next_prime(13));
	printf("Expect: 284 => 293\n");
	printf("Result: 284 => %d\n", ft_find_next_prime(284));
	printf("Expect: 2147483643 => 2147483647\n");
	printf("Result: 2147483643 => %d\n", ft_find_next_prime(2147483643));
	printf("Expect: 2147483647 => 2147483647\n");
	printf("Result: 2147483647 => %d\n", ft_find_next_prime(2147483647));
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

int	ft_find_next_prime(int nb)
{
	if (nb == 2147483647)
		return (2147483647);
	if (nb <= 2)
		return (2);
	nb ++;
	while (!ft_is_prime(nb))
		nb ++;
	return (nb);
}
