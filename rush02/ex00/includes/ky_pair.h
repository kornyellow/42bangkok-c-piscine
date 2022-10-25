/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_pair.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:30:09 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/24 10:22:36 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KY_PAIR_H
# define KY_PAIR_H

# include "ky_lib.h"

int				ky_count_char(char *str, char c);
void			ky_transcript_sort(struct s_pair **dict);
struct s_pair	*ky_make_pairs(char *str);
struct s_pair	*ky_dict_search(unsigned int search, struct s_pair *dict);
struct s_pair	*ky_dict_get(unsigned int key, struct s_pair *dict);

#endif
