/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sky.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:24:11 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/16 21:45:13 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKY_H
# define SKY_H

# include "recursion.h"
# include "algorithm.h"
# include "grid.h"
# include "std.h"
# include "data.h"

int	sky_solve(char **argv, unsigned int size)
{
	int				ret;
	char			*clue_data;
	char			*grid_data;

	clue_data = 0;
	grid_data = 0;
	ret = SUCCESS;
	if (ret == SUCCESS)
		ret = grid_allocate_clue(&clue_data, argv, size);
	if (ret == SUCCESS)
		ret = grid_allocate_grid(&grid_data, size);
	if (ret == SUCCESS)
	{
		algorithm_fill_edge_case(grid_data, clue_data, size);
		recursion_solve(grid_data, clue_data, 0);
		ret = data_check_error(grid_data);
		if (ret != ERROR_NO_SOLUTION)
			grid_display(grid_data, SIZE);
		free(clue_data);
		free(grid_data);
	}
	return (ret);
}

#endif
