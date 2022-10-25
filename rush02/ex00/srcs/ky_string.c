/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 08:35:05 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/23 15:22:04 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ky_string.h"

int	ky_is_alphabet(char c)
{
	return ((c >= 'a' && c <= 'z') || \
			(c >= 'A' && c <= 'Z'));
}

int	ky_is_whitespace(char c)
{
	return (c == '\r' || c == '\n' || c == '\t' || \
			c == '\v' || c == '\f' || c == ' ');
}

int	ky_is_printable(char c)
{
	return (c >= ' ');
}

int	ky_count_to_char(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i] != 0)
		i ++;
	return (i);
}

char	**ky_split(char *str, char sep)
{
	int		word_count;
	int		char_count;
	int		i;
	char	*word;
	char	**ret;

	word_count = ky_count_char(str, sep) + 1;
	char_count = 0;
	ret = malloc((word_count + 1) * sizeof(char *));
	i = 0;
	while (i < word_count)
	{
		char_count = ky_count_to_char(str, sep);
		word = malloc((char_count + 1) * sizeof(char));
		ret[i] = word;
		while (char_count-- > 0)
			*word++ = *str++;
		*word = 0;
		str += char_count + 2;
		i ++;
	}
	ret[i] = 0;
	return (ret);
}
