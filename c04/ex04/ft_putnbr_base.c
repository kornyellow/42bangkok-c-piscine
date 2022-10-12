/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:55:55 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/12 00:44:45 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	kn_putchar_recur(int nbr, int base, char *base_str);
void	ft_putnbr_base(int nbr, char *base);
int		kn_strlen(char *str);
int		kn_verify(char *str);
/*
#include <stdio.h>
int main()
{
	char base[] = "0123456789";
	ft_putnbr_base(32, base);
	return 0;
}
*/

int	kn_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (*str != 0)
	{
		str ++;
		i ++;
	}
	return (i);
}

int	kn_verify(char *str)
{
	char	is_seen[256];
	int		is_seen_index;
	int		index;

	is_seen[0] = '\0';
	index = 0;
	while (*str != 0)
	{
		if (*str == '-' || *str == '+')
			return (0);
		is_seen_index = 0;
		while (is_seen[is_seen_index] != 0)
		{
			if (is_seen[is_seen_index] == *str)
				return (0);
			is_seen_index ++;
		}
		is_seen[index] = *str;
		is_seen[++index] = '\0';
		str ++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	c;
	int		base_len;

	base_len = kn_strlen(base);
	if (base_len <= 1 || !kn_verify(base))
	{
		return ;
	}
	if (nbr < 0)
	{
		nbr *= -1;
		c = '-';
		write(1, &c, 1);
	}
	if (nbr == 0)
	{
		c = base[0];
		write(1, &c, 1);
	}
	else
	{
		kn_putchar_recur(nbr, base_len, base);
	}
}

void	kn_putchar_recur(int nbr, int base, char *base_str)
{
	char	c;

	if (nbr > 0)
	{
		c = base_str[(nbr % base)];
		kn_putchar_recur(nbr / base, base, base_str);
		write(1, &c, 1);
	}
}
