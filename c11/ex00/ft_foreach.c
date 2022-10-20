/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 01:05:22 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/21 01:15:14 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	if (f == 0)
		return ;
	i = 0;
	while (i < length)
		f(tab[i++]);
}
/*
#include <unistd.h>

void	kn_printnbr(int nb, int carry)
{
	char	x;

	if (nb == -2147483648)
	{
		carry += 1;
		nb += 1;
	}
	if (nb < 0)
	{
		x = '-';
		write(1, &x, 1);
		nb *= -1;
	}
	x = '0' + (nb % 10) + carry;
	carry = 0;
	nb /= 10;
	if (nb == 0)
	{
		write(1, &x, 1);
	}
	else
	{
		kn_printnbr(nb, carry);
		write(1, &x, 1);
	}
}

void	ft_putnbr(int nb)
{
	kn_printnbr(nb, 0);
}

int	main(void)
{
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_foreach(tab, 10, &ft_putnbr);
	return (0);
}
*/
