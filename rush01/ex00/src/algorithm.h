/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:25:30 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/16 21:06:07 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGORITHM_H
# define ALGORITHM_H

# include "includes.h"
# include "data.h"
# include "std.h"

void	algorithm_fill_edge_case_sub(char **col, char clue)
{
	unsigned int	i;

	if (clue == SIZE)
	{
		i = 1;
		while (i <= SIZE)
		{
			*col[i - 1] = i;
			i ++;
		}
	}
	else if (clue == 1)
		*col[0] = SIZE;
}

void	algorithm_fill_col(unsigned int i, char *grid, char clue)
{
	char	**col;

	if (i >= 0 && i <= SIZE - 1)
	{
		col = data_get_col(grid, i, SIZE);
		algorithm_fill_edge_case_sub(col, clue);
		free(col);
	}
	else if (i >= SIZE && i <= SIZE * 2 - 1)
	{
		col = std_rev_char(data_get_col(grid, i - SIZE, SIZE), SIZE);
		algorithm_fill_edge_case_sub(col, clue);
		free(col);
	}
}

void	algorithm_fill_row(unsigned int i, char *grid, char clue)
{
	char	**row;

	if (i >= SIZE * 2 && i <= SIZE * 3 - 1)
	{
		row = data_get_row(grid, i - SIZE * 2, SIZE);
		algorithm_fill_edge_case_sub(row, clue);
		free(row);
	}
	else if (i >= SIZE * 3 && i <= SIZE * 4 - 1)
	{
		row = std_rev_char(data_get_row(grid, i - SIZE * 3, SIZE), SIZE);
		algorithm_fill_edge_case_sub(row, clue);
		free(row);
	}
}

void	algorithm_fill_edge_case(char *grid, char *clue, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size * 4)
	{
		algorithm_fill_col(i, grid, clue[i]);
		algorithm_fill_row(i, grid, clue[i]);
		i ++;
	}
}

#endif
