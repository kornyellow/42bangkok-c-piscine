/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:10:31 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/06 23:18:39 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	kn_print_comb2_sub(int a);

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	space;
	char	comma;

	a = -1;
	space = ' ';
	comma = ',';
	while (++a <= 98)
	{
		b = a;
		while (++b <= 99)
		{
			kn_print_comb2_sub(a);
			write(1, &space, 1);
			kn_print_comb2_sub(b);
			if (a != 98 || b != 99)
			{
				write(1, &comma, 1);
				write(1, &space, 1);
			}
		}
	}
}

void	kn_print_comb2_sub(int a)
{
	char	d0;
	char	d1;

	d0 = (a % 10) + '0';
	d1 = (a / 10) + '0';
	write(1, &d1, 1);
	write(1, &d0, 1);
}
