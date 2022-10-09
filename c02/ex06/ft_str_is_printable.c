/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:27:58 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/09 18:16:42 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);
/*
#include <stdio.h>
int main() {
	char str1[] = "Hello";
	char str2[] = "korn";
	char str3[] = "KOR\1N";
	char str4[] = "ko0rn";
	char str5[] = "ko rn";
	char str6[] = "\n";

	printf("%d : %s\n", ft_str_is_printable(str1), str1);
	printf("%d : %s\n", ft_str_is_printable(str2), str2);
	printf("%d : %s\n", ft_str_is_printable(str3), str3);
	printf("%d : %s\n", ft_str_is_printable(str4), str4);
	printf("%d : %s\n", ft_str_is_printable(str5), str5);
	printf("%d : %s\n", ft_str_is_printable(str6), str6);

	return 0;
}
*/

int	ft_str_is_printable(char *str)
{
	int	i;

	if (*str == '\0')
	{
		return (1);
	}
	i = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) > 31 && (*(str + i) != 127)))
		{
			i ++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
