/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:01:49 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/12 20:27:16 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);
int	ft_find_next_prime(int nb);
/* TODO: c05:ex07 -> Todo
#include <stdio.h>
int main()
{
	printf("%d\n", ft_is_prime(29));
	printf("Expect: 13 => 17\n");
	printf("Result: 13 => %d\n", ft_find_next_prime(13));
	printf("Expect: 5 => 7\n");
	printf("Result: 5 => %d\n", ft_find_next_prime(5));
	printf("Expect: 3 => 5\n");
	printf("Result: 3 => %d\n", ft_find_next_prime(3));
	printf("Expect: 19 => 23\n");
	printf("Result: 19 => %d\n", ft_find_next_prime(19));
	printf("Expect: 97 => 23\n");
	printf("Result: 97 => %d\n", ft_find_next_prime(97));
	int i = 1;
	while (1)
	{
		i = ft_find_next_prime(i);
		printf("%d\n", i);
	}
	return 0;
}
*/

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb)
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(++nb))
	{
		printf("nb = %d\n", nb);
	}
	return (nb);
}
