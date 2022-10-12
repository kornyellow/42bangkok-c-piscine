/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:52:21 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/11 22:41:39 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char s1[] = "KornABCE\0A";
	char s2[] = "KornABCD\0B";
	printf("%d\n", strncmp(s1, s2, 7));
	return 0;
}
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if ((!*s1 && !*s2) || n <= 0)
	{
		return (0);
	}
	if (*s1 == *s2)
	{
		return (ft_strncmp(++s1, ++s2, --n));
	}
	else
	{
		return (*s1 - *s2);
	}
}
