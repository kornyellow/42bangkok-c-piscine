/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_transcript.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:28:16 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/24 11:18:30 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KY_TRANSCRIPT_H
# define KY_TRANSCRIPT_H

# include "ky_lib.h"

struct	s_pair;

int	ky_transcript(unsigned int key, struct s_pair *dict);
int	ky_transcript_for_99(unsigned int number, \
						struct s_pair *dict);
int	ky_transcript_for_999(unsigned int number, \
						struct s_pair *dict);
int	ky_transcript_for_999999(unsigned int number, \
						struct s_pair *dict);
int	ky_transcript_for_999999999(unsigned int number, \
						struct s_pair *dict);

#endif
