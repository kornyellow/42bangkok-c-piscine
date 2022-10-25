/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_program.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 07:54:36 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/24 14:00:21 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KY_PROGRAM_H
# define KY_PROGRAM_H

# include "ky_lib.h"

int		ky_program_prepare(int argc, char **argv);
int		ky_program_start(char *dict_path, char *number_str);
int		ky_program_check(int argc, char **argv, char **number_str, \
						int *is_stdin);
char	*ky_read_from_stdin(void);

#endif
