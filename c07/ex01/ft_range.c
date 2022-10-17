/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 02:18:17 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/17 02:53:22 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);
/*
#include <stdio.h>
int main()
{
	int *list;
	list = ft_range(5, 10);
	for (int i = 0; i < 5; i++)
		printf("%d ", list[i]);
	printf("\n");
	free(list);
}
*/

int	*ft_range(int min, int max)
{
	int	*ret;
	int	*arr;

	if (min >= max)
		return (0);
	arr = malloc(max - min);
	ret = arr;
	while (min < max)
		*arr++ = min++;
	return (ret);
}
