/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:02:01 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/16 21:43:28 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

# include "recursion.h"

int	recursion_check_grid(char *grid, int idx, int num);

char	**data_get_row(char *grid_data, unsigned int idx, unsigned int size)
{
	char			**ret_row;
	unsigned int	i;

	i = 0;
	ret_row = malloc(size);
	while (i != size)
	{
		ret_row[i] = (idx * size) + grid_data + i;
		i ++;
	}
	return (ret_row);
}

char	**data_get_col(char *grid_data, unsigned int idx, unsigned int size)
{
	char			**ret_col;
	unsigned int	i;

	i = 0;
	ret_col = malloc(size);
	while (i != size)
	{
		ret_col[i] = (i * SIZE) + grid_data + idx;
		i ++;
	}
	return (ret_col);
}

int	data_check_error(char *grid_data)
{
	int	i;

	i = 0;
	while (i < SIZE * SIZE)
	{
		if (grid_data[i ++] == 0)
			return (ERROR_NO_SOLUTION);
		if (!recursion_check_grid(grid_data, i, grid_data[i]))
			return (ERROR_NO_SOLUTION);
	}
	return (SUCCESS);
}

#endif
