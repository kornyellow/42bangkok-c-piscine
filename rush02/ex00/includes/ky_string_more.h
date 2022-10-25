/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_string_more.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:29:39 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/24 14:24:05 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KY_STRING_MORE_H
# define KY_STRING_MORE_H

# include "ky_lib.h"

char	*ky_strdup(char *src);
void	ky_strtrim(char **src);
void	ky_strtrimbetween(char **src);

#endif
