/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_dict.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 09:11:16 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/23 14:02:44 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KY_DICT_H
# define KY_DICT_H

# include "ky_lib.h"

# define PARSING_START 0
# define PARSING_NUMBER 1
# define PARSING_COLON 2
# define PARSING_SPACE 3
# define PARSING_VALUE 4

struct	s_pair
{
	unsigned int	key;
	char			*value;
};

struct s_pair	*ky_dict_parser(char *dict_path);
int				ky_dict_get_size(char *dict_path);
char			*ky_dict_alloc_str(char *dict_path, int dict_size);
char			*ky_dict_parser_clean(char *dict_str, int dict_size);
char			*ky_dict_parser_sub(char *dict_str, int dict_size, \
									char **str, int i);

#endif
