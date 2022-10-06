/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:16:52 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/06 15:06:56 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);
void	kn_print_combn(int n, int i, char arr[], int *is_first);
void	kn_print_digits(int n, char arr[]);
void	kn_write(char x);

void	ft_print_combn(int n)
{
	char	arr[10];
	int		is_first;

	is_first = 1;
	kn_print_combn(n, 0, arr, &is_first);
}

void	kn_print_combn(int n, int i, char arr[], int *is_first)
{
	if (n == i)
	{
		if (*is_first == 0)
		{
			kn_write(',');
			kn_write(' ');
		}
		*is_first = 0;
		kn_print_digits(n, arr);
		return ;
	}
	if (i == 0)
	{
		arr[i] = i + '0';
	}
	else
	{
		arr[i] = arr[i - 1] + 1;
	}
	while (arr[i] <= '9')
	{
		kn_print_combn(n, i + 1, arr, is_first);
		arr[i]++;
	}
}

void	kn_print_digits(int n, char arr[])
{
	if (n > -1)
	{
		kn_print_digits(n - 1, arr);
		write(1, &arr[n], 1);
	}
}

void	kn_write(char x)
{
	write(1, &x, 1);
}
