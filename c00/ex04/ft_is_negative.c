/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:24:47 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/06 10:32:41 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	letter_p;
	char	letter_n;

	letter_p = 'P';
	letter_n = 'N';
	if (!n || n >= 0)
	{
		write(1, &letter_p, 1);
	}
	else
	{
		write(1, &letter_n, 1);
	}
}
