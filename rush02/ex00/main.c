/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 07:33:11 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/23 15:22:44 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ky_lib.h"

int	main(int argc, char **argv)
{
	int	result;

	result = ky_program_prepare(argc, argv);
	if (result != SUCCESS)
		ky_error_display(result);
	return (SUCCESS);
}
