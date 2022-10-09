/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:12:48 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/09 18:17:21 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);
/*
#include <stdio.h>
int main() {
	char str1[] = "Hello";
	char str2[] = "K0rn";
	char str3[] = "SawadeeKrub";
	char str4[] = "K-orn";
	char str5[] = "K orn";
	char str6[] = "";

	printf("%d : %s\n", ft_str_is_alpha(str1), str1);
	printf("%d : %s\n", ft_str_is_alpha(str2), str2);
	printf("%d : %s\n", ft_str_is_alpha(str3), str3);
	printf("%d : %s\n", ft_str_is_alpha(str4), str4);
	printf("%d : %s\n", ft_str_is_alpha(str5), str5);
	printf("%d : %s\n", ft_str_is_alpha(str6), str6);

	return 0;
}
*/

int	ft_str_is_alpha(char *str)
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
		else if ((*(str + i) >= 'a' && (*(str + i) <= 'z')))
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
