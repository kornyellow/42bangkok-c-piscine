/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:07:47 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/17 02:17:31 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char *dup;
	char str[] = "kornyellow";

	dup = strdup(str);
	printf("%s\n", dup);
	free(dup);

	dup = ft_strdup(str);
	printf("%s\n", dup);
	free(dup);
	return 0;
}
*/

char	*ft_strdup(char *src)
{
	char	*dup;
	int		len;

	len = 0;
	while (src[len] != 0)
		len ++;
	dup = malloc(len + 1);
	len = -1;
	while (src[++len] != 0)
		dup[len] = src[len];
	dup[len] = 0;
	return (dup);
}
