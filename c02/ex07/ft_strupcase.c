/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:35:20 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/09 18:16:31 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);
/*
#include <stdio.h>
int main() {
	char str1[] = "Hello";
	char str2[] = "korn";
	char str3[] = "KORnN";
	char str4[] = "ko0rn";
	char str5[] = "ko rn";

	printf("Before %s\n", str1);
	printf("After  %s\n", ft_strupcase(str1));
	printf("Before %s\n", str2);
	printf("After  %s\n", ft_strupcase(str2));
	printf("Before %s\n", str3);
	printf("After  %s\n", ft_strupcase(str3));
	printf("Before %s\n", str4);
	printf("After  %s\n", ft_strupcase(str4));
	printf("Before %s\n", str5);
	printf("After  %s\n", ft_strupcase(str5));

	return 0;
}
*/

char	*ft_strupcase(char *str)
{
	int	i;

	if (*str == '\0')
	{
		return (str);
	}
	i = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 'a' && (*(str + i) <= 'z')))
		{
			*(str + i) -= 'a' - 'A';
		}
		i ++;
	}
	return (str);
}
