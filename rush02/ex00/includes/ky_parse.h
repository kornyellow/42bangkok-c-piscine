/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_parse.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:46:15 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/23 14:05:14 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KY_PARSE_H
# define KY_PARSE_H

# include "ky_lib.h"

int		ky_parsing_start(char *dict_str, int *state, int i);
char	*ky_parsing_number(char **str, char *dict_str, int *state, int i);
char	*ky_parsing_colon(char **str, char *dict_str, int *state, int i);
void	ky_parsing_space(char *dict_str, int *state, int i);
char	*ky_parsing_value(char **str, char *dict_str, int *state, int i);

#endif
