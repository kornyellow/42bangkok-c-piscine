/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:24:06 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/16 21:18:42 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H

# include "data.h"

int	check_tower(char **list)
{
	int	stack;
	int	max;
	int	i;

	stack = 0;
	max = 0;
	i = 0;
	while (i < SIZE)
	{
		if (*list[i] != 0)
		{
			if (max == 0 || *list[i] > max)
			{
				max = *list[i];
				stack ++;
			}
		}
		else
		{
			return (-1);
		}
		i ++;
	}
	return (stack);
}

int	check_is_col_filled(char *grid, int idx)
{
	char	**col;
	int		i;

	i = 0;
	col = data_get_row(grid, idx % SIZE, SIZE);
	while (i < SIZE)
	{
		if (i == idx / SIZE)
		{
			i ++;
			continue ;
		}
		if (*col[i] == 0)
		{
			free(col);
			return (0);
		}
		i ++;
	}
	free(col);
	return (1);
}

int	check_is_row_filled(char *grid, int idx)
{
	char	**row;
	int		i;

	i = 0;
	row = data_get_row(grid, idx / SIZE, SIZE);
	while (i < SIZE)
	{
		if (i == idx % SIZE)
		{
			i ++;
			continue ;
		}
		if (*row[i] == 0)
		{
			free(row);
			return (0);
		}
		i ++;
	}
	free(row);
	return (SIZE);
}

#endif
