/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_memory.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:01:39 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/24 11:15:18 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KY_MEMORY_H
# define KY_MEMORY_H

# include "ky_lib.h"

struct	s_pair;

char	*ky_free_str_return(char **str);
void	ky_free_split(char ***str);
void	ky_free_struct(struct s_pair **dict);
int		ky_transcript_other(unsigned int number, \
						struct s_pair *dict);

#endif
