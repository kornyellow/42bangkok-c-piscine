/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:54:49 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/11 20:16:17 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);
/*
#include <stdio.h>
#include <string.h>
int main() {
	unsigned int len = 10;
	char src[] = "ABCDEF";
	char dest[len];
	char *ret;

	printf("Destination information (Before):\n");
	for (unsigned int i = 0; i < len; i++)
		printf("[%d] Raw:%2c , ASCII:%3d\n", i, dest[i], dest[i]);

	ret = ft_strncpy(dest, src, 5);

	printf("\nResult of ft_strncpy() len %d:\n", len);
	printf("Source      Pointer : %p\n", src);
	printf("Destination Pointer : %p\n", dest);
	printf("Source      : %s\n", src);
	printf("Destination : %s\n", dest);
	printf("Returned Destination Pointer : %p\n", ret);

	printf("\nDestination information (After):\n");
	for (unsigned int i = 0; i < len; i++)
		printf("[%d] Raw:%2c , ASCII:%3d\n", i, dest[i], dest[i]);

	return 0;
}
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*ret;

	ret = dest;
	if (!dest && !src)
		return (0);
	while (*src && n--)
	{
		*dest = *src;
		dest ++;
		src ++;
	}
	return (ret);
}
