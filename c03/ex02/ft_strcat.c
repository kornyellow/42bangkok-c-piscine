/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:58:57 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/11 22:41:20 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[11];
	str1[0] = 'k';
	str1[1] = 'o';
	str1[2] = 'r';
	str1[3] = 'n';
	str1[4] = '\0';
	char str2[] = "yellow";
	printf("%s\n", ft_strcat(str1, str2));
	return 0;
}
*/

char	*ft_strcat(char *dest, char *src)
{
	char	*end_of_dest;

	end_of_dest = dest;
	while (*end_of_dest != 0)
		end_of_dest ++;
	while (*src != 0)
	{
		*end_of_dest = *src;
		end_of_dest ++;
		src ++;
	}
	if (*end_of_dest != 0)
		*end_of_dest = *src;
	return (dest);
}
