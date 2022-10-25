/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_string_more.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:30:22 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/24 14:26:09 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ky_string_more.h"

char	*ky_strdup(char *src)
{
	char	*dup;
	int		len;

	len = 0;
	while (src[len] != 0)
		len ++;
	dup = malloc(len + 1);
	len = -1;
	while (src[++len] != 0)
		dup[len] = src[len];
	dup[len] = 0;
	return (dup);
}

void	ky_strtrimbetween(char **src)
{
	char	*p1;
	char	*p2;
	char	*str;

	str = *src;
	p1 = str;
	p2 = str;
	while (*p1 != 0)
	{
		if (*p1 == ' ')
			p1 ++;
		else if (*p1 != ' ')
		{
			*p2++ = *p1++;
			if (*p1 == ' ')
				*p2++ = *p1++;
		}
	}
	if (*(p2 - 1) == ' ')
		p2--;
	*(p2) = '\0';
}

void	ky_strtrim(char **src)
{
	int	i;

	i = 0;
	if (!src)
		return ;
	while ((*src)[i] != 0)
		i ++;
	i --;
	while ((*src)[i] == ' ')
	{
		(*src)[i] = '\0';
		i --;
		if (i < 0)
			return ;
	}
	return ;
}
