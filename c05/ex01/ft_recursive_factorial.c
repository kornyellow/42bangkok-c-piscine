/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:03:00 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/12 17:17:12 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);
/*
#include <stdio.h>
int main()
{
	printf("Factorial of -1 is : %d\n", ft_recursive_factorial(-1));
	printf("Factorial of 0 is : %d\n", ft_recursive_factorial(0));
	printf("Factorial of 1 is : %d\n", ft_recursive_factorial(1));
	printf("Factorial of 2 is : %d\n", ft_recursive_factorial(2));
	printf("Factorial of 3 is : %d\n", ft_recursive_factorial(3));
	printf("Factorial of 4 is : %d\n", ft_recursive_factorial(4));
	printf("Factorial of 5 is : %d\n", ft_recursive_factorial(5));
}
*/

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
