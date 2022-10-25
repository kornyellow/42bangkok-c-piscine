/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ky_transcript.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:28:50 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/24 12:29:29 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ky_transcript.h"

int	ky_transcript_for_99(unsigned int number, struct s_pair *dict)
{
	struct s_pair	*tens;
	struct s_pair	*units;

	if (number <= 20)
	{
		units = ky_dict_search(number, dict);
		if (!units)
			return (FALSE);
		ky_putstr(units->value);
		return (TRUE);
	}
	units = ky_dict_search(number % 10, dict);
	tens = ky_dict_search(number - (number % 10), dict);
	if (!tens || !units)
		return (FALSE);
	ky_putstr(tens->value);
	if (units->key != 0)
	{
		if (IS_DASHED)
			ky_putchar('-');
		else
			ky_putchar(' ');
		ky_putstr(units->value);
	}
	return (TRUE);
}

int	ky_transcript_for_999(unsigned int number, struct s_pair *dict)
{
	struct s_pair	*hundred;
	int				remainder;
	int				mod;

	hundred = ky_dict_get(100, dict);
	if (!hundred)
		return (FALSE);
	remainder = number / 100;
	mod = number % 100;
	if (remainder > 0)
	{
		if (!ky_transcript_for_99(remainder, dict))
			return (FALSE);
		ky_putchar(' ');
		ky_putstr(hundred->value);
	}
	if (mod > 0)
	{
		ky_putchar(' ');
		if (!ky_transcript_for_99(mod, dict))
			return (FALSE);
	}
	return (TRUE);
}

int	ky_transcript_for_999999(unsigned int number, \
								struct s_pair *dict)
{
	struct s_pair	*thousand;
	int				remainder;
	int				mod;

	thousand = ky_dict_get(1000, dict);
	if (!thousand)
		return (FALSE);
	remainder = number / 1000;
	mod = number % 1000;
	if (remainder > 0)
		if (!ky_transcript(remainder, dict))
			return (FALSE);
	ky_putchar(' ');
	ky_putstr(thousand->value);
	if (mod > 0)
	{
		if (mod >= 100)
			ky_putchar(' ');
		if (!ky_transcript_for_999(mod, dict))
			return (FALSE);
	}
	return (TRUE);
}

int	ky_transcript_for_999999999(unsigned int number, \
									struct s_pair *dict)
{
	struct s_pair	*million;
	int				remainder;
	int				mod;

	million = ky_dict_get(1000000, dict);
	if (!million)
		return (FALSE);
	remainder = number / 1000000;
	mod = number % 1000000;
	if (remainder > 0)
		if (!ky_transcript(remainder, dict))
			return (FALSE);
	ky_putchar(' ');
	ky_putstr(million->value);
	if (mod > 0)
	{
		ky_putchar(' ');
		if (!ky_transcript(mod, dict))
			return (FALSE);
	}
	return (TRUE);
}

int	ky_transcript(unsigned int number, struct s_pair *dict)
{
	if (number < 100)
		return (ky_transcript_for_99(number, dict));
	else if (number < 1000)
		return (ky_transcript_for_999(number, dict));
	else if (number < 1000000)
		return (ky_transcript_for_999999(number, dict));
	else if (number < 1000000000)
		return (ky_transcript_for_999999999(number, dict));
	return (ky_transcript_other(number, dict));
}
