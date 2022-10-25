/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_program.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 07:56:53 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/24 14:02:08 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ky_program.h"

int	ky_program_check(int argc, char **argv, char **number_str, int *is_stdin)
{
	if (argc > 3)
		return (ERROR_ARGUMENT_COUNT);
	if (argc == 1)
	{
		*number_str = ky_read_from_stdin();
		if (*number_str)
			*is_stdin = TRUE;
		else
			return (ERROR_ARGUMENT_EMPTY);
	}
	if (argc == 2)
		*number_str = argv[1];
	if (argc == 3)
		*number_str = argv[2];
	return (SUCCESS);
}

int	ky_program_prepare(int argc, char **argv)
{
	char	*number_str;
	char	*dict_path;
	int		is_stdin;
	int		res;

	dict_path = DEFAULT_PATH_DICT;
	is_stdin = FALSE;
	res = ky_program_check(argc, argv, &number_str, &is_stdin);
	if (res == SUCCESS && !ky_verify_number(number_str))
		res = ERROR_ARGUMENT_INVALID_NUMBER;
	if (res == SUCCESS && !ky_verify_dict(dict_path))
		res = ERROR_ARGUMENT_INVALID_DICT;
	if (res == SUCCESS)
	{
		if (argc == 3)
			dict_path = argv[1];
		number_str = ky_verify_number(number_str);
		res = ky_program_start(dict_path, number_str);
	}
	if (is_stdin)
		free(number_str);
	return (res);
}

int	ky_program_start(char *dict_path, char *number_str)
{
	struct s_pair	*number_dict;
	unsigned int	number;

	number_dict = ky_dict_parser(dict_path);
	if (number_dict == NULL)
		return (ERROR_DICT_PARSING);
	number = ky_atoi(number_str);
	ky_transcript_sort(&number_dict);
	if (!ky_transcript(number, number_dict))
	{
		ky_putchar('\n');
		ky_free_struct(&number_dict);
		return (ERROR_DICT_NOT_FOUND);
	}
	ky_putchar('\n');
	ky_free_struct(&number_dict);
	return (SUCCESS);
}

char	*ky_read_from_stdin(void)
{
	char	*ret;
	int		i;

	i = 0;
	ky_putstr("Please enter number to convert: ");
	ret = malloc(64 * sizeof(char));
	if (read(0, ret, 64) == 0)
	{
		free(ret);
		return (NULL);
	}
	while (ret[i] != '\n' && ret[i] != 0)
		i ++;
	ret[i] = 0;
	return (ret);
}
