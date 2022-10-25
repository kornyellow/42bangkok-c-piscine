/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_verify.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 08:26:08 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/24 14:00:13 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ky_verify.h"

int	ky_verify_each(char *str)
{
	if (str[0] - '0' < 4)
		return (TRUE);
	if (str[1] - '0' < 2)
		return (TRUE);
	if (str[2] - '0' < 9)
		return (TRUE);
	if (str[3] - '0' < 4)
		return (TRUE);
	if (str[4] - '0' < 9)
		return (TRUE);
	if (str[5] - '0' < 6)
		return (TRUE);
	if (str[6] - '0' < 7)
		return (TRUE);
	if (str[7] - '0' < 2)
		return (TRUE);
	if (str[8] - '0' < 9)
		return (TRUE);
	if (str[9] - '0' < 6)
		return (TRUE);
	return (FALSE);
}

int	ky_verify_max(char *number_str)
{
	int	i;

	i = 0;
	while (ky_is_number(number_str[i]))
		i ++;
	if (i > 10)
		return (FALSE);
	else if (i == 10)
		return (ky_verify_each(number_str));
	return (TRUE);
}

char	*ky_verify_number(char *number_str)
{
	int	i;
	int	is_found_number;

	i = -1;
	is_found_number = FALSE;
	while (number_str[++i] != 0)
	{
		if (number_str[i] != ' ' && !ky_is_number(number_str[i]))
			return (NULL);
		if (ky_is_number(number_str[i]))
			is_found_number = TRUE;
	}
	if (!is_found_number)
		return (NULL);
	i = 0;
	while (!ky_is_number(number_str[i]) && number_str[i] != 0)
		if (number_str[i++] != ' ')
			return (NULL);
	if (!ky_verify_max(number_str + i))
		return (NULL);
	return (number_str + i);
}

char	*ky_verify_dict(char *dict_path)
{
	int	fd;

	fd = open(dict_path, O_RDONLY);
	if (fd == -1)
		return (NULL);
	if (close(fd) == -1)
		return (NULL);
	return (dict_path);
}
