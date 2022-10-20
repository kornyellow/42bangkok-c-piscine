/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:41:20 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/16 20:35:37 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/includes.h"
#include "src/arg.h"
#include "src/sky.h"

int	main(int argc, char **argv)
{
	unsigned int	ret;
	unsigned int	size;

	size = SIZE;
	ret = SUCCESS;
	if (argc != 2)
		ret = ERROR_ARGUMENT_COUNT;
	if (ret == SUCCESS)
		ret = arg_argument_check(argv, size);
	if (ret == SUCCESS)
		ret = sky_solve(argv, size);
	if (ret != SUCCESS)
		arg_show_error(ret);
	return (ret);
}
