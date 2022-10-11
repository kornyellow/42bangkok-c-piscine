/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:31:35 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/08 23:32:06 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	my_print(int x, int y, int r, int c)
{
	if ((r == y && c == x) || (r == 1 && c == x))
	{
		ft_putchar('A');
	}
	else if ((r == y && c == 1) || (r == 1 && c == 1))
	{
		ft_putchar('C');
	}
	else if ((r == y || c == 1) || (r == 1 || c == x))
	{
		ft_putchar('B');
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
