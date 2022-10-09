/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:20:11 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/09 18:16:11 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	kn_putint_hexadecimal(int quotient, int first);
void	ft_putstr_non_printable(char *str);
/*
#include <stdio.h>
int main()
{
	char str[] = "Coucou\ntu \nvas bien ?";
	ft_putstr_non_printable(str);
}
*/

void	kn_putint_hexadecimal(int quotient, int first)
{
	char	temp;

	if (quotient == 0)
	{
		return ;
	}
	if (first && quotient < 16)
	{
		temp = '0';
		write(1, &temp, 1);
	}
	first = 0;
	temp = quotient % 16;
	if (temp < 10)
	{
		temp = temp + 48;
	}
	else
	{
		temp = temp + 87;
	}
	quotient = quotient / 16;
	kn_putint_hexadecimal(quotient, first);
	write(1, &temp, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	bkslash;
	int		i;

	bkslash = '\\';
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) <= 31 || *(str + i) == 127)
		{
			write(1, &bkslash, 1);
			kn_putint_hexadecimal(*(str + i), 1);
		}
		else
		{
			write(1, str + i, 1);
		}
		i ++;
	}
}
