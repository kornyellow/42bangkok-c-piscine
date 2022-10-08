/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:54:49 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/08 17:11:06 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);
/*
#include <stdio.h>
#include <string.h>
int main() {

	unsigned int len = 8;
	char src[] = "Hello";
	char dest[8];
	char *ret;

	dest[5] = 'X';
	dest[6] = 'X';
	dest[7] = 'X';
	printf("Destination information (Before):\n");
	for (int i = 0; i < 8; i++)
		printf("[%d] Raw:%2c , ASCII:%3d\n", i, dest[i], dest[i]);

	ret = ft_strncpy(dest, src, len);
	printf("\nResult of ft_strcpy() len %d:\n", len);
	printf("Source      Pointer : %p\n", src);
	printf("Destination Pointer : %p\n", dest);
	printf("Source      : %s\n", src);
	printf("Destination : %s\n", dest);
	printf("Returned Destination Pointer : %p\n", ret);

	printf("\nDestination information (After):\n");
	for (int i = 0; i < 8; i++)
		printf("[%d] Raw:%2c , ASCII:%3d\n", i, dest[i], dest[i]);

	return 0;
}
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i == 0 || (i != n && *(src + i - 1) != '\0'))
	{
		*(dest + i) = *(src + i);
		i ++;
	}
	while (i != n)
	{
		*(dest + i) = '\0';
		i ++;
	}
	return (dest);
}
