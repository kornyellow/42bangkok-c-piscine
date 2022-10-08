/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:01:44 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/08 14:34:49 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);
void	kn_sort_int_tab(int *tab, int size, int i);
int		kn_find_min(int *tab, int size, int min);
/* TODO: c01:ex08 -> Segmentation Fault
#include <stdio.h>
int main() {
	int tab[] = {3, 4, 2, 0, 9, 7, 5, 6, 8, 1};
	int size = 10;

	printf("Before : ");
	for (int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	ft_sort_int_tab(tab, size);

	printf("After  : ");
	for (int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	return 0;
}
*/

void	ft_sort_int_tab(int *tab, int size)
{
	kn_sort_int_tab(tab, size, 0);
}

void	kn_sort_int_tab(int *tab, int size, int i)
{
	int	temp;

	temp = kn_find_min(tab, size, 0);
	if (i < size)
	{
		kn_sort_int_tab(tab, size, i + 1);
		*(tab + i) = temp;
	}
}

int	kn_find_min(int *tab, int size, int min)
{
	int	temp;

	if (size == 1)
	{
		temp = *(tab + min);
		*(tab + min) = 2147483647;
		return (temp);
	}
	else if (*(tab + size - 1) < *(tab + min))
	{
		min = size - 1;
	}
	return (kn_find_min(tab, size - 1, min));
}
