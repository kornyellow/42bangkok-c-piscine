/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:41:15 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/16 03:24:19 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RECURSION_H
# define RECURSION_H

# include "data.h"
# include "grid.h"
# include "check.h"
# include "memory.h"

int	recursion_check_clue_col(char *grid, char *clue, int i, int num)
{
	char	**col;
	int		ret1;
	int		ret2;
	int		res1;
	int		res2;

	ret1 = -1;
	ret2 = -1;
	col = data_get_col(grid, i % SIZE, SIZE);
	*col[i / SIZE] = num;
	ret1 = check_tower(col);
	col = std_rev_char(col, SIZE);
	ret2 = check_tower(col);
	col = std_rev_char(col, SIZE);
	*col[i / SIZE] = 0;
	free(col);
	res1 = ret1 == clue[(i % SIZE)];
	res2 = ret2 == clue[(i % SIZE) + SIZE];
	return (ret1 == -1 || (res1 && res2));
}

int	recursion_check_clue_row(char *grid, char *clue, int i, int num)
{
	char	**row;
	int		ret1;
	int		ret2;
	int		res1;
	int		res2;

	ret1 = -1;
	ret2 = -1;
	row = data_get_row(grid, i / SIZE, SIZE);
	*row[i % SIZE] = num;
	ret1 = check_tower(row);
	row = std_rev_char(row, SIZE);
	ret2 = check_tower(row);
	row = std_rev_char(row, SIZE);
	*row[i % SIZE] = 0;
	free(row);
	res1 = ret1 == clue[(i / SIZE) + (SIZE * 2)];
	res2 = ret2 == clue[(i / SIZE) + (SIZE * 3)];
	return (ret1 == -1 || (res1 && res2));
}

int	recursion_check_grid(char *grid, int idx, int num)
{
	char	**col;
	char	**row;
	int		i;

	col = data_get_col(grid, idx % SIZE, SIZE);
	i = -1;
	while (++i < SIZE)
		if (*col[i] != 0 && *col[i] == num)
			return (memory_free(col, 0));
	free(col);
	i = -1;
	row = data_get_row(grid, idx / SIZE, SIZE);
	while (++i < SIZE)
		if (*row[i] != 0 && *row[i] == num)
			return (memory_free(row, 0));
	free(row);
	return (1);
}

int	recursion_solve(char *grid, char *clue, int idx)
{
	int	num;

	num = 0;
	if (idx == SIZE * SIZE)
		return (1);
	if (grid[idx] > 0)
		return (recursion_solve(grid, clue, idx + 1));
	return (memory_solve(grid, clue, idx, 0));
}

#endif
