/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:54:31 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/20 01:37:17 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		kn_strs_len(int size, char **strs);
/*
#include <stdio.h>
char	*kn_make_string(int size, char *str)
{
	char *ret;
	char *res;

	ret = malloc(size + 1);
	res = ret;
	while (*str != '\0')
		*ret++ = *str++;
	*ret = '\0';
	return res;
}

int main()
{
	char **strs = malloc(4 * sizeof(char*));
	*(strs) = kn_make_string(4, "korn");
	*(strs+1) = kn_make_string(6, "yellow");
	*(strs+2) = kn_make_string(5, "hello");
	*(strs+3) = kn_make_string(5, "world");
	char *sep = kn_make_string(2, "->");

	printf("1st string : %s\n", *(strs));
	printf("2nd string : %s\n", *(strs+1));
	printf("3rd string : %s\n", *(strs+2));
	printf("4th string : %s\n", *(strs+3));
	printf("seperator : %s\n", sep);

	char *result = ft_strjoin(4, strs, sep);
	printf("result of ft_strjoin() : %s\n", result);

	free(result);
	free(*(strs));
	free(*(strs+1));
	free(*(strs+2));
	free(*(strs+3));
	free(sep);
	free(strs);

	return 0;
}
*/

int	kn_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len ++;
	return (len);
}

int	kn_strslen(int size, char **strs)
{
	int	len;
	int	str_at;
	int	chr_at;

	len = 0;
	str_at = 0;
	while (size > 0)
	{
		chr_at = 0;
		while (strs[str_at][chr_at] != '\0')
		{
			len ++;
			chr_at ++;
		}
		str_at ++;
		size --;
	}
	return (len);
}

char	*ft_strjoin_error(void)
{
	char	*ret;

	ret = malloc(1);
	*ret = '\0';
	return (ret);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		str_at;
	int		chr_at;
	int		at;
	int		len;

	if (size <= 0)
		return (ft_strjoin_error());
	len = kn_strslen(size, strs) + (kn_strlen(sep) * (size - 1));
	ret = malloc(len + 1);
	str_at = 0;
	at = 0;
	while (str_at < size)
	{
		chr_at = 0;
		while (strs[str_at][chr_at] != '\0')
			ret[at++] = strs[str_at][chr_at++];
		chr_at = 0;
		if (str_at != size - 1)
			while (sep[chr_at] != '\0')
				ret[at++] = sep[chr_at++];
		str_at ++;
	}
	ret[at] = '\0';
	return (ret);
}
