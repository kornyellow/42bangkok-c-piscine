/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:14:01 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/09 18:17:11 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);
/*
#include <stdio.h>
int main() {
	char str1[] = "Hello";
	char str2[] = "K0rn";
	char str3[] = "12345";
	char str4[] = "4 32123 213";
	char str5[] = "231123oko";
	char str6[] = "";

	printf("%d : %s\n", ft_str_is_numeric(str1), str1);
	printf("%d : %s\n", ft_str_is_numeric(str2), str2);
	printf("%d : %s\n", ft_str_is_numeric(str3), str3);
	printf("%d : %s\n", ft_str_is_numeric(str4), str4);
	printf("%d : %s\n", ft_str_is_numeric(str5), str5);
	printf("%d : %s\n", ft_str_is_numeric(str6), str6);

	return 0;
}
*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (*str == '\0')
	{
		return (1);
	}
	i = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= '0' && (*(str + i) <= '9')))
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
