/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 07:35:32 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/24 11:27:36 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KY_LIB_H
# define KY_LIB_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# include "ky_dict.h"
# include "ky_config.h"
# include "ky_std.h"
# include "ky_program.h"
# include "ky_error.h"
# include "ky_verify.h"
# include "ky_number.h"
# include "ky_string.h"
# include "ky_string_more.h"
# include "ky_memory.h"
# include "ky_parse.h"
# include "ky_pair.h"
# include "ky_atoi.h"
# include "ky_transcript.h"

# define TRUE 1
# define FALSE 0

# define SUCCESS 0

# define ERROR_ARGUMENT_COUNT 1
# define ERROR_ARGUMENT_EMPTY 2
# define ERROR_ARGUMENT_INVALID_NUMBER 3
# define ERROR_ARGUMENT_INVALID_DICT 4

# define ERROR_DICT_PARSING 5
# define ERROR_DICT_NOT_FOUND 6

#endif
