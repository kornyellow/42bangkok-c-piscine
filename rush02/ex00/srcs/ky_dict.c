/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 09:15:22 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/24 13:05:31 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ky_dict.h"

int	ky_dict_get_size(char *dict_path)
{
	int					fd;
	int					buff_size;
	int					read_buff;
	char				buff;

	fd = open(dict_path, O_RDONLY);
	buff_size = 0;
	if (fd == -1)
		return (-1);
	while (TRUE)
	{
		read_buff = read(fd, &buff, 1);
		if (read_buff == -1)
			return (-1);
		if (read_buff == 0)
			break ;
		buff_size ++;
	}
	if (close(fd) == -1)
		return (-1);
	return (buff_size);
}

char	*ky_dict_alloc_str(char *dict_path, int dict_size)
{
	char	*dict_str;
	int		fd;

	dict_str = malloc((dict_size + 1) * sizeof(char));
	if (dict_str == NULL)
		return (NULL);
	fd = open(dict_path, O_RDONLY);
	if (fd == -1 || read(fd, dict_str, dict_size) == -1 || close(fd) == -1)
		return (NULL);
	return (dict_str);
}

char	*ky_dict_parser_sub(char *dict_str, int dict_size, char **str, \
		int i)
{
	int	state;

	state = PARSING_START;
	while (i < dict_size)
	{
		if (i == dict_size - 1 && dict_str[i] != '\n')
			return (NULL);
		if (!ky_parsing_start(dict_str, &state, i))
			return (NULL);
		*str = ky_parsing_number(str, dict_str, &state, i);
		if (*str == NULL)
			return (NULL);
		ky_parsing_space(dict_str, &state, i);
		*str = ky_parsing_value(str, dict_str, &state, i);
		if (*str == NULL)
			return (NULL);
		*str = ky_parsing_colon(str, dict_str, &state, i);
		if (*str == NULL)
			return (NULL);
		i ++;
	}
	**str = 0;
	return (*str);
}

char	*ky_dict_parser_clean(char *dict_str, int dict_size)
{
	char	*ret;
	char	*str;
	int		i;

	str = malloc((dict_size) * sizeof(char));
	if (str == 0)
	{
		free(str);
		return (NULL);
	}
	ret = str;
	i = 0;
	if (ky_dict_parser_sub(dict_str, dict_size, &str, i) == NULL)
	{
		free(ret);
		return (NULL);
	}
	return (ret);
}

struct s_pair	*ky_dict_parser(char *dict_path)
{
	int				dict_size;
	char			*dict_processed;
	char			*dict_str;
	struct s_pair	*dict;

	dict_size = ky_dict_get_size(dict_path);
	if (dict_size <= 0)
		return (NULL);
	dict_str = ky_dict_alloc_str(dict_path, dict_size);
	if (dict_str == NULL)
		return (NULL);
	dict_processed = ky_dict_parser_clean(dict_str, dict_size);
	free(dict_str);
	if (dict_processed == NULL)
		return (NULL);
	dict = ky_make_pairs(dict_processed);
	free(dict_processed);
	return (dict);
}
