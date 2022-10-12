/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:03:00 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/12 17:17:25 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);
/*
#include <stdio.h>
int main()
{
	printf("Factorial of -1 is : %d\n", ft_iterative_factorial(-1));
	printf("Factorial of 0 is : %d\n", ft_iterative_factorial(0));
	printf("Factorial of 1 is : %d\n", ft_iterative_factorial(1));
	printf("Factorial of 2 is : %d\n", ft_iterative_factorial(2));
	printf("Factorial of 3 is : %d\n", ft_iterative_factorial(3));
	printf("Factorial of 4 is : %d\n", ft_iterative_factorial(4));
	printf("Factorial of 5 is : %d\n", ft_iterative_factorial(5));
}
*/

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	res = 1;
	while (nb != 0)
		res *= nb--;
	return (res);
}
