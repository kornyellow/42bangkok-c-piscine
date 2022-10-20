/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 01:36:26 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/21 02:11:12 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	if (f == 0)
		return (0);
	i = -1;
	while (tab[++i] != 0)
		if (!f(tab[i]))
			return (0);
	return (1);
}
/*
#include <stdio.h>
int	ft_contains_number(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != 0)
		if (str[i] >= '0' && str[i] <= '9')
			return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	for (int i = 0; i < argc; i++)
		printf("args %d: %s\n", i, argv[i]);
	printf("result: %d\n", ft_any(argv, &ft_contains_number));
	return (0);
}
*/
