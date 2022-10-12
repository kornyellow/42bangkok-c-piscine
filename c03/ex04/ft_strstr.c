/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:42:12 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/11 23:01:11 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);
char	*kn_strstr(char *str, char *to_find, char *last_find);
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[] = "kornyellow";
	char str2[] = "";
	printf("%s\n", ft_strstr(str1, str2));
	return 0;
}
*/

char	*ft_strstr(char *str, char *to_find)
{
	return (kn_strstr(str, to_find, str));
}

char	*kn_strstr(char *str, char *to_find, char *last_find)
{
	if (*to_find == 0)
		return (last_find);
	if (*str == 0)
		return (0);
	if (*str != *to_find)
	{
		str ++;
		return (kn_strstr(str, to_find, str));
	}
	else
	{
		return (kn_strstr(++str, ++to_find, last_find));
	}
}
