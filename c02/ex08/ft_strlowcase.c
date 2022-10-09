/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:44:28 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/09 18:16:21 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);
/*
#include <stdio.h>
int main() {
	char str1[] = "Hello";
	char str2[] = "korn";
	char str3[] = "KORnN";
	char str4[] = "ko0rn";
	char str5[] = "ASDASDSA ASD AS ASDASasasdas ASDA !@ ! @#R)Q#)SAS)FJ@ OJ QW";

	printf("Before %s\n", str1);
	printf("After  %s\n", ft_strlowcase(str1));
	printf("Before %s\n", str2);
	printf("After  %s\n", ft_strlowcase(str2));
	printf("Before %s\n", str3);
	printf("After  %s\n", ft_strlowcase(str3));
	printf("Before %s\n", str4);
	printf("After  %s\n", ft_strlowcase(str4));
	printf("Before %s\n", str5);
	printf("After  %s\n", ft_strlowcase(str5));

	return 0;
}
*/

char	*ft_strlowcase(char *str)
{
	int	i;

	if (*str == '\0')
	{
		return (str);
	}
	i = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 'A' && (*(str + i) <= 'Z')))
		{
			*(str + i) -= 'A' - 'a';
		}
		i ++;
	}
	return (str);
}
