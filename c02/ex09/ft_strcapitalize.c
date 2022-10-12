/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:48:46 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/12 15:00:59 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
int		kn_is_alpha(char c);
/*
#include <stdio.h>
int main() {
	char str1[] = "Hello";
	char str2[] = "korn ok hello world my name is korn";
	char str3[] = "KORnN";
	char str4[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str5[] = "ASDASDSA ASD AS ASDASasasdas ASDA !@ ! @#R)Q#)SAS)FJ@ OJ QW";

	printf("Before %s\n", str1);
	printf("After  %s\n", ft_strcapitalize(str1));
	printf("Before %s\n", str2);
	printf("After  %s\n", ft_strcapitalize(str2));
	printf("Before %s\n", str3);
	printf("After  %s\n", ft_strcapitalize(str3));
	printf("Before %s\n", str4);
	printf("After  %s\n", ft_strcapitalize(str4));
	printf("Before %s\n", str5);
	printf("After  %s\n", ft_strcapitalize(str5));

	return 0;
}
*/

int	kn_is_alpha(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && (*(str + i) <= 'z'))
		{
			if (i == 0 || !kn_is_alpha(*(str + i - 1)))
			{
				*(str + i) += 'A' - 'a';
			}
		}
		else if (*(str + i) >= 'A' && (*(str + i) <= 'Z'))
		{
			if (i != 0 && kn_is_alpha(*(str + i - 1)))
			{
				*(str + i) -= 'A' - 'a';
			}
		}
		i ++;
	}
	return (str);
}
