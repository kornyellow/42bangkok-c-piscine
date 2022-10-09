/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:14:14 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/09 18:17:03 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);
/*
#include <stdio.h>
int main() {
	char str1[] = "Hello";
	char str2[] = "korn";
	char str3[] = "KORN";
	char str4[] = "ko0rn";
	char str5[] = "ko rn";
	char str6[] = "";

	printf("%d : %s\n", ft_str_is_lowercase(str1), str1);
	printf("%d : %s\n", ft_str_is_lowercase(str2), str2);
	printf("%d : %s\n", ft_str_is_lowercase(str3), str3);
	printf("%d : %s\n", ft_str_is_lowercase(str4), str4);
	printf("%d : %s\n", ft_str_is_lowercase(str5), str5);
	printf("%d : %s\n", ft_str_is_lowercase(str6), str6);

	return 0;
}
*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	if (*str == '\0')
	{
		return (1);
	}
	i = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 'a' && (*(str + i) <= 'z')))
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
