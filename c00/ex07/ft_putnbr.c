/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:06:17 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/06 12:15:43 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	kn_printnbr(int nb);

void	ft_putnbr(int nb)
{
	kn_printnbr(nb);
}

void	kn_printnbr(int nb)
{
	char	x;

	if (nb != 0)
	{
		x = '0' + (nb % 10);
		nb = nb / 10;
		kn_printnbr(nb);
		write(1, &x, 1);
	}
}
