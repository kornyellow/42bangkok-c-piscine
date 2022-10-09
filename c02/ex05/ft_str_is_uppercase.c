/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:19:35 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/09 18:16:51 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);
/*
#include <stdio.h>
int main() {
	char str1[] = "Hello";
	char str2[] = "korn";
	char str3[] = "KORN";
	char str4[] = "ko0rn";
	char str5[] = "ko rn";
	char str6[] = "";

	printf("%d : %s\n", ft_str_is_uppercase(str1), str1);
	printf("%d : %s\n", ft_str_is_uppercase(str2), str2);
	printf("%d : %s\n", ft_str_is_uppercase(str3), str3);
	printf("%d : %s\n", ft_str_is_uppercase(str4), str4);
	printf("%d : %s\n", ft_str_is_uppercase(str5), str5);
	printf("%d : %s\n", ft_str_is_uppercase(str6), str6);

	return 0;
}
*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (*str == '\0')
	{
		return (1);
	}
	i = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 'A' && (*(str + i) <= 'Z')))
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
