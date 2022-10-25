/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_memory.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:03:36 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/24 12:30:48 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ky_memory.h"

char	*ky_free_str_return(char **str)
{
	if (*str != 0)
		free(*str);
	return (NULL);
}

void	ky_free_split(char ***str)
{
	int	i;

	i = 0;
	while ((*str)[i] != 0)
		free((*str)[i++]);
	free(*str);
}

void	ky_free_struct(struct s_pair **dict)
{
	int	i;

	i = 0;
	while ((*dict)[i].value != NULL)
		free((*dict)[i++].value);
	free(*dict);
}

int	ky_transcript_other(unsigned int number, struct s_pair *dict)
{
	struct s_pair	*billion;
	int				remainder;
	int				mod;

	billion = ky_dict_get(1000000000, dict);
	if (!billion)
		return (FALSE);
	remainder = number / 1000000000;
	mod = number % 1000000000;
	if (remainder > 0)
		if (!ky_transcript(remainder, dict))
			return (FALSE);
	ky_putchar(' ');
	ky_putstr(billion->value);
	if (mod > 0)
	{
		ky_putchar(' ');
		if (!ky_transcript(mod, dict))
			return (FALSE);
	}
	return (TRUE);
}
