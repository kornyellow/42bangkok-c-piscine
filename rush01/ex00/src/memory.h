/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 00:59:07 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/16 21:51:51 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H

# include "check.h"

int	recursion_check_clue_col(char *grid, char *clue, int i, int num);
int	recursion_check_clue_row(char *grid, char *clue, int i, int num);
int	recursion_solve(char *grid, char *clue, int idx);
int	recursion_check_grid(char *grid, int idx, int num);

int	memory_free(char **a, int ret)
{
	free(a);
	return (ret);
}

int	memory_solve_1(char *grid, char *clue, int idx, int num)
{
	if (recursion_check_grid(grid, idx, num) && \
		recursion_check_clue_row(grid, clue, idx, num))
	{
		grid[idx] = num;
		if (recursion_solve(grid, clue, idx + 1))
			return (1);
	}
	return (0);
}

int	memory_solve_2(char *grid, char *clue, int idx, int num)
{
	if (recursion_check_grid(grid, idx, num) && \
		recursion_check_clue_col(grid, clue, idx, num))
	{
		grid[idx] = num;
		if (recursion_solve(grid, clue, idx + 1))
			return (1);
	}
	return (0);
}

int	memory_solve_3(char *grid, char *clue, int idx, int num)
{
	if (recursion_check_grid(grid, idx, num))
	{
		grid[idx] = num;
		if (recursion_solve(grid, clue, idx + 1))
			return (1);
	}
	return (0);
}

int	memory_solve(char *grid, char *clue, int idx, int num)
{
	while (++num <= SIZE)
	{
		if (check_is_row_filled(grid, idx))
		{
			if (memory_solve_1(grid, clue, idx, num))
				return (1);
		}
		else if (check_is_col_filled(grid, idx))
		{
			if (memory_solve_2(grid, clue, idx, num))
				return (1);
		}
		else
		{
			if (memory_solve_3(grid, clue, idx, num))
				return (1);
		}
		grid[idx] = 0;
	}
	return (0);
}

#endif
