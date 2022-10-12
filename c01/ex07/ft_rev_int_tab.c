/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:06:52 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/12 20:39:21 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);
void	kn_rev_int_tab(int *tab, int size, int i);
/* TODO: c01:ex07 -> Segmentation Fault
#include <stdio.h>
int main() {
	int tab[] = {1, 2, 3};
	int size = 2;

	printf("Before : ");
	for (int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	ft_rev_int_tab(tab, size);

	printf("After  : ");
	for (int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	return 0;
}
*/

void	ft_rev_int_tab(int *tab, int size)
{
	if (!tab)
		return ;
	kn_rev_int_tab(tab, size, size);
}

void	kn_rev_int_tab(int *tab, int size, int i)
{
	int	prev;
	int	*new;

	if (i > 0)
	{
		new = tab + i - 1;
		prev = *new;
		kn_rev_int_tab(tab, size, i - 1);
		*(tab + size - i) = prev;
	}
}
