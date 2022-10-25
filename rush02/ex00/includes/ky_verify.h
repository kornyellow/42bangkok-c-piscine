/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_verify.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 08:26:27 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/24 14:00:29 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KY_VERIFY_H
# define KY_VERIFY_H

# include "ky_lib.h"

char	*ky_verify_number(char *number_str);
char	*ky_verify_dict(char *dict_path);
int		ky_verify_max(char *number_str);

#endif
