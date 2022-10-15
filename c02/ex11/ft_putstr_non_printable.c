/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:20:11 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/15 14:02:14 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	kn_putint_hexadecimal(int quotient, int first);
void	ft_putstr_non_printable(char *str);
/* TODO: c02:ex11 -> KO
#include <stdio.h>
int main()
{
	char str[] = "Coucou\b\t\t\t\f\f\f\r\r\ntu \nvas bien ?";
	ft_putstr_non_printable(str);
}
*/

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) <= ' ' || *(str + i) == 127)
		{
			write(1, "//", 1);
			write(1, "0123456789abcdef"[*(str + i) / 16], 1);
			write(1, "0123456789abcdef"[*(str + i) % 16], 1);
		}
		else
		{
			write(1, str + i, 1);
		}
		i ++;
	}
}
