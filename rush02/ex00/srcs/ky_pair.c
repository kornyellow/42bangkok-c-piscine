/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_pair.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:31:43 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/24 14:23:47 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ky_pair.h"

void	ky_transcript_sort(struct s_pair **dict)
{
	struct s_pair	temp;
	int				i;

	i = 0;
	while ((*dict)[i + 1].value != NULL)
	{
		if ((*dict)[i].value < (*dict)[i + 1].value)
		{
			temp = (*dict)[i];
			(*dict)[i] = (*dict)[i + 1];
			(*dict)[i + 1] = temp;
			i = 0;
		}
		else
			i ++;
	}
}

struct s_pair	*ky_dict_get(unsigned int key, struct s_pair *dict)
{
	int	i;

	i = 0;
	while (dict[i].value != NULL)
	{
		if (dict[i].key == key)
			return (dict + i);
		i ++;
	}
	return (NULL);
}

struct s_pair	*ky_dict_search(unsigned int search, struct s_pair *dict)
{
	int	i;

	i = 0;
	while (dict[i].value != NULL)
	{
		if (dict[i].key == search)
			return (dict + i);
		i ++;
	}
	return (NULL);
}

int	ky_count_char(char *str, char c)
{
	int	i;

	i = 0;
	while (*str != 0)
		if (*str++ == c)
			i ++;
	return (i);
}

struct s_pair	*ky_make_pairs(char *str)
{
	struct s_pair	*ret;
	char			**pairs;
	char			**pair;
	int				size;
	int				i;

	i = -1;
	size = ky_count_char(str, '\n');
	ret = malloc((size + 1) * sizeof(struct s_pair));
	pairs = ky_split(str, '\n');
	while (i++ < size - 1)
	{
		pair = ky_split(pairs[i], ':');
		ret[i].key = ky_atoi(pair[0]);
		ret[i].value = ky_strdup(pair[1]);
		ky_strtrim(&ret[i].value);
		ky_strtrimbetween(&ret[i].value);
		ky_free_split(&pair);
	}
	ret[i].key = 0;
	ret[i].value = NULL;
	ky_free_split(&pairs);
	return (ret);
}
