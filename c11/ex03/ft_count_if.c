/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 02:12:08 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/21 02:27:42 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	c;

	if (f == 0)
		return (0);
	c = 0;
	i = -1;
	while (tab[++i] != 0)
		if (f(tab[i]))
			c ++;
	return (c);
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
	printf("result: %d\n", ft_count_if(argv, &ft_contains_number));
	return (0);
}
*/
