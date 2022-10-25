/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:26:22 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/25 11:58:54 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
char				*ft_stralloc(char *str, int size);
void				ft_show_tab(struct s_stock_str *par);
void				ft_putnbr(int nbr, int carry);
int					ft_putstr(char *str, int is_count);
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	ft_show_tab(structs);
	return (0);
}
*/

void	ft_putnbr(int nb, int carry)
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
		ft_putnbr(nb, carry);
		write(1, &x, 1);
	}
}

int	ft_putstr(char *str, int is_count)
{
	int	l;

	l = 0;
	while (str[l] != 0)
	{
		if (!is_count)
			write(1, &str[l], 1);
		l ++;
	}
	return (l);
}

char	*ft_stralloc(char *str, int size)
{
	char	*ret;
	int		i;

	ret = malloc(sizeof(char) * (size + 1));
	if (!ret)
		return (0);
	i = 0;
	while (i < size)
	{
		ret[i] = str[i];
		i ++;
	}
	ret[i] = 0;
	return (ret);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	int					m_err;
	struct s_stock_str	*arr;

	i = -1;
	m_err = 0;
	arr = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (arr == 0)
		return (0);
	while (++i < ac)
	{
		arr[i].size = ft_putstr(av[i], 1);
		arr[i].str = av[i];
		arr[i].copy = ft_stralloc(av[i], arr[i].size);
		if (!arr[i].str || !arr[i].copy)
			m_err = 1;
	}
	if (m_err)
	{
		free(arr);
		return (0);
	}
	arr[i].str = 0;
	arr[i].copy = 0;
	return (arr);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str, 0);
		ft_putstr("\n", 0);
		ft_putnbr(par[i].size, 0);
		ft_putstr("\n", 0);
		ft_putstr(par[i].copy, 0);
		ft_putstr("\n", 0);
		i ++;
	}
}
