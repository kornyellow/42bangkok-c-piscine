/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:43:38 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/11 22:41:53 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char s1[] = "Korn\0A";
	char s2[] = "Korn\0B";
	printf("%d\n", ft_strcmp(s1, s2));
	return 0;
}
*/

int	ft_strcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
	{
		return (0);
	}
	if (*s1 == *s2)
	{
		return (ft_strcmp(++s1, ++s2));
	}
	else
	{
		return (*s1 - *s2);
	}
}
