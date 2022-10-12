/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:35:57 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/12 15:00:11 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);
/*
#include <stdio.h>
#include <string.h>
int main() {

	char src[] = "Hello";
	char dest[8];
	char *ret;

	dest[6] = 'X';
	dest[7] = 'X';
	printf("Destination information (Before):\n");
	for (int i = 0; i < 8; i++)
		printf("[%d] Raw:%2c , ASCII:%3d\n", i, dest[i], dest[i]);

	ret = strcpy(dest, src);
	printf("\nResult of ft_strcpy():\n");
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

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (i == 0 || *(src + i - 1) != '\0')
	{
		*(dest + i) = *(src + i);
		i ++;
	}
	return (dest);
}
