/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 02:34:12 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/21 02:36:34 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ATOI_H
# define FT_ATOI_H

int	ft_char(char c);
int	ft_convert_to_number(int nbr, char c, int *is_start);
int	ft_is_number(char c);
int	ft_atoi(char *str);

#endif
