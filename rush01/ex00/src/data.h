/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:02:01 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/16 04:24:30 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

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
	}
	return (SUCCESS);
}

#endif
