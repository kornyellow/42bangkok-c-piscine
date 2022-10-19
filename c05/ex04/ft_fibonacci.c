/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibbonacci.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:37:33 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/12 19:46:18 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index);
/*
#include <stdio.h>
int main()
{
	printf("Fibo -1 is = %d\n", ft_fibonacci(-1));
	printf("Fibo 0 is = %d\n", ft_fibonacci(0));
	printf("Fibo 1 is = %d\n", ft_fibonacci(1));
	printf("Fibo 2 is = %d\n", ft_fibonacci(2));
	printf("Fibo 3 is = %d\n", ft_fibonacci(3));
	printf("Fibo 4 is = %d\n", ft_fibonacci(4));
	printf("Fibo 5 is = %d\n", ft_fibonacci(5));
	printf("Fibo 6 is = %d\n", ft_fibonacci(6));
	printf("Fibo 50 is = %d\n", ft_fibonacci(50));
	return 0;
}
*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
