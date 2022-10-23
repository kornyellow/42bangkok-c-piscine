/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:44:49 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/19 18:52:49 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);
/*
#include <stdio.h>
int main()
{
	int *list;
	ft_ultimate_range(&list, 5, 10);
	for (int i = 0; i < 5; i++)
		printf("%d ", list[i]);
	printf("\n");
	free(list);
}
*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*temp;

	if (range == 0)
		return (-1);
	}
	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	temp = malloc(sizeof(int) * (max - min));
	if (temp == 0)
	{
		*range = 0;
		return (-1);
	}
	while (i < max - min)
	{
		temp[i] = min + i;
		i ++;
	}
	*range = temp;
	return (max - min);
}
