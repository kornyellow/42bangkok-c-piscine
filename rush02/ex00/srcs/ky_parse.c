/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:55:49 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/24 11:43:20 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ky_parse.h"

int	ky_parsing_start(char *dict_str, int *state, int i)
{
	if (*state == PARSING_START)
	{
		if (dict_str[i] != '\n' && dict_str[i] != ' ' && \
			!ky_is_number(dict_str[i]))
			return (FALSE);
		if (ky_is_number(dict_str[i]))
			*state = PARSING_NUMBER;
	}
	return (TRUE);
}

char	*ky_parsing_number(char **str, char *dict_str, int *state, int i)
{
	if (*state == PARSING_NUMBER)
	{
		if (!ky_is_number(dict_str[i]))
			*state = PARSING_COLON;
		else
			*(*str)++ = dict_str[i];
	}
	return (*str);
}

char	*ky_parsing_colon(char **str, char *dict_str, int *state, int i)
{
	if (*state == PARSING_COLON)
	{
		if (dict_str[i] == ':')
		{
			*(*str)++ = dict_str[i];
			*state = PARSING_SPACE;
		}
		else if (dict_str[i] != ' ')
			return (NULL);
	}
	return (*str);
}

void	ky_parsing_space(char *dict_str, int *state, int i)
{
	if (*state == PARSING_SPACE)
		if (dict_str[i] != ' ')
			*state = PARSING_VALUE;
}

char	*ky_parsing_value(char **str, char *dict_str, int *state, int i)
{
	if (*state == PARSING_VALUE)
	{
		if (dict_str[i] == '\n')
		{
			*(*str)++ = dict_str[i];
			*state = PARSING_START;
		}
		else if (!ky_is_printable(dict_str[i]))
			return (NULL);
		else
			*(*str)++ = dict_str[i];
	}
	return (*str);
}
