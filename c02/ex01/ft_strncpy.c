/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:54:49 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/12 22:40:20 by korojrat         ###   ########.fr       */
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

	dest[6] = 'A';
	dest[7] = 'A';
	dest[8] = 'A';
	dest[9] = 'A';
	printf("Destination information (Before):\n");
	for (unsigned int i = 0; i < len; i++)
		printf("[%d] Raw:%2c , ASCII:%3d\n", i, dest[i], dest[i]);

	ret = ft_strncpy(dest, src, 6);

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
	unsigned int	i;

	i = 0;
	while (*(src + i) != 0 && i < n)
	{
		*(dest + i) = *(src + i);
		i ++;
	}
	while (i < n)
	{
		*(dest + i) = 0;
		i++;
	}
	return (dest);
}
