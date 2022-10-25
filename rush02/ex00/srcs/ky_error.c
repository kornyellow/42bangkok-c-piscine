/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 08:22:37 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/24 14:09:35 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ky_error.h"

void	ky_error_display(int error)
{
	if (PRODUCTION && error == ERROR_ARGUMENT_COUNT)
		ky_putstr("ERROR: invalid numbers of argument.\n");
	if (PRODUCTION && error == ERROR_ARGUMENT_EMPTY)
		ky_putstr("ERROR: no arguments supplied.\n");
	else if (error == ERROR_ARGUMENT_EMPTY)
		ky_putstr("ERROR: no arguments supplied.\n");
	if (PRODUCTION && error == ERROR_ARGUMENT_INVALID_NUMBER)
		ky_putstr("Error\n");
	else if (error == ERROR_ARGUMENT_INVALID_NUMBER)
		ky_putstr("ERROR: invalid unsigned integer.\n");
	if (error == ERROR_ARGUMENT_INVALID_DICT)
		ky_putstr("ERROR: cannot find dictionary.\n");
	if (PRODUCTION && error == ERROR_DICT_PARSING)
		ky_putstr("Dict Error\n");
	else if (error == ERROR_DICT_PARSING)
		ky_putstr("ERROR: dictionary is corrupted.\n");
	if (PRODUCTION && error == ERROR_DICT_NOT_FOUND)
		ky_putstr("Dict Error\n");
	else if (error == ERROR_DICT_NOT_FOUND)
		ky_putstr("ERROR: dictionary is not complete.\n");
}
