/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:38:34 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/16 21:58:23 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRID_H
# define GRID_H

char	grid_atoi(char *str)
{
	return (*str - '0');
}

int	grid_allocate_clue(char **clue_data, char **argv, unsigned int size)
{
	char			*str;
	unsigned int	i;

	*clue_data = malloc(size * size);
	str = *(argv + 1);
	i = 0;
	while (i != size * size)
	{
		(*clue_data)[i] = grid_atoi(&str[i * 2]);
		i ++;
	}
	return (SUCCESS);
}

int	grid_allocate_grid(char **grid_data, unsigned int size)
{
	unsigned int	i;

	*grid_data = malloc(size * size);
	size = 0;
	i = 0;
	while (i != size * size)
	{
		(*grid_data)[i] = 0;
		i ++;
	}
	return (SUCCESS);
}

void	grid_display(char *data, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i != size * size)
	{
		std_putchar(data[i] + '0');
		if (i % size == SIZE - 1)
		{
			std_putstr("\n");
		}
		else
		{
			std_putchar(' ');
		}
		i ++;
	}
}

#endif
