/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 08:33:52 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/23 14:48:39 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KY_STRING_H
# define KY_STRING_H

# include "ky_lib.h"

int		ky_is_alphabet(char c);
int		ky_is_whitespace(char c);
int		ky_is_printable(char c);
int		ky_count_to_char(char *str, char c);
char	**ky_split(char *str, char sep);

#endif
