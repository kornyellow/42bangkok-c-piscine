/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:07:54 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/08 23:08:48 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	my_print(int x, int y, int r, int c)
{
	if (r == y && c == x)
	{
		ft_putchar('/');
	}
	else if (r == y && c == 1)
	{
		ft_putchar('\\');
	}
	else if (r == 1 && c == x)
	{
		ft_putchar('\\');
	}
	else if (r == 1 && c == 1)
	{
		ft_putchar('/');
	}
	else if ((r == y || c == 1) || (r == 1 || c == x))
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = y + 1;
	while (--r > 0)
	{
		c = x + 1;
		while (--c > 0)
		{
			my_print(x, y, r, c);
		}
		ft_putchar('\n');
	}
}
