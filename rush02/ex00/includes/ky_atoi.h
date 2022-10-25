/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_atoi.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:47:24 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/23 15:59:46 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KY_ATOI_H
# define KY_ATOI_H

# include "ky_lib.h"

int				ky_char(char c);
unsigned int	ky_convert_to_number(unsigned int nbr, char c, int *is_start);
unsigned int	ky_atoi(char *str);

#endif
