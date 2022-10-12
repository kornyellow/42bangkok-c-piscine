/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:31:36 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/11 22:40:35 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);
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
	printf("%s\n", ft_strncat(str1, str2, 3));
	return 0;
}
*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*end_of_dest;

	if (nb == 0)
	{
		return (dest);
	}
	end_of_dest = dest;
	while (*end_of_dest != 0)
		end_of_dest ++;
	while (*src != 0 && nb > 1)
	{
		*end_of_dest = *src;
		end_of_dest ++;
		src ++;
		nb --;
	}
	if (*end_of_dest != 0)
	{
		*end_of_dest++ = *src;
		*end_of_dest = '\0';
	}
	return (dest);
}
