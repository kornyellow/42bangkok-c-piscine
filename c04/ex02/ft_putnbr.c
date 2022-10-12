/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:06:17 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/11 23:24:01 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	kn_printnbr(int nb, int carry);
/*
int		main(void)
{
	ft_putnbr(2147483647);
	ft_putnbr(-2147483648);
	ft_putnbr(0);
	return (0);
}
*/

void	ft_putnbr(int nb)
{
	kn_printnbr(nb, 0);
}

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
