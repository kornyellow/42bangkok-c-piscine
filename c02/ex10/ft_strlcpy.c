/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:02:56 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/09 18:15:44 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
/*
#include <stdio.h>
#include <string.h>
int main() {

	unsigned int len = 6;
	char src[] = "HelloWorld";
	char dest[6];
	unsigned int ret;

	dest[5] = 'X';
	printf("Destination information (Before):\n");
	for (int i = 0; i < 6; i++)
		printf("[%d] Raw:%2c , ASCII:%3d\n", i, dest[i], dest[i]);

	ret = ft_strlcpy(dest, src, len);
	printf("\nResult of ft_strlcpy() len %d:\n", len);
	printf("Source      Pointer : %p\n", src);
	printf("Destination Pointer : %p\n", dest);
	printf("Source      : %s\n", src);
	printf("Destination : %s\n", dest);
	printf("Returned Value : %u\n", ret);

	printf("\nDestination information (After):\n");
	for (int i = 0; i < 6; i++)
		printf("[%d] Raw:%2c , ASCII:%3d\n", i, dest[i], dest[i]);

	return 0;
}
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*d;
	char			*s;
	unsigned int	n;

	d = dest;
	s = src;
	n = size;
	if (n != 0)
	{
		while (--n != 0)
		{
			*d++ = *s++;
			if (*d == '\0' && *s == '\0')
				break ;
		}
	}
	if (n == 0)
	{
		if (size != 0)
			*d = '\0';
		while (*s != '\0')
			s++;
	}
	return (s - src - 1);
}
