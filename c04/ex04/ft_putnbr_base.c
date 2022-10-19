/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:55:55 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/20 02:19:09 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	kn_putchar_recur(int nbr, int base, char *base_str, int carry);
void	ft_putnbr_base(int nbr, char *base);
int		kn_strlen(char *str);
int		kn_verify(char *str);
/*
int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

void	printstr(char *str)
{
	write(1, str, len(str));
}

int	main(void)
{
	printstr("Expect result :-2147483648\n"); 
	printstr("User   result :");
	ft_putnbr_base(-2147483648,"0123456789");
	printstr("\nExpect result :\n"); 
	printstr("User   result :");
	ft_putnbr_base(123,"01+3456789");
	ft_putnbr_base(123,"01234-6789");
	ft_putnbr_base(123,"0");
	ft_putnbr_base(-123,"012+456789");
	ft_putnbr_base(-123,"0123-56789");
	ft_putnbr_base(123,"0123436789");
	ft_putnbr_base(-123,"0023456789");
	ft_putnbr_base(-123,"0123456780");
	printstr("\nExpect result :-7852516351\n"); 
	printstr("User   result :");
	ft_putnbr_base(-2147483648,"9876543210");
	printstr("\nExpect result :-20000000000\n"); 
	printstr("User   result :");
	ft_putnbr_base(-2147483648,"01234567");
	printstr("\nExpect result :-80000000\n"); 
	printstr("User   result :");
	ft_putnbr_base(-2147483648,"0123456789aBcDeF");
	printstr("\nExpect result :-12aBcDeF\n"); 
	printstr("User   result :");
	ft_putnbr_base(-0x12ABCDEF,"0123456789aBcDeF");
	printstr("\nExpect result :-1010101101010100101010110101010\n"); 
	printstr("User   result :");
	ft_putnbr_base(-0x55AA55AA,"01");
	printstr("\nExpect result :17777777777\n"); 
	printstr("User   result :");
	ft_putnbr_base(2147483647,"01234567");
	printstr("\nExpect result :7852516352\n"); 
	printstr("User   result :");
	ft_putnbr_base(2147483647,"9876543210");
	printstr("\nExpect result :12340\n"); 
	printstr("User   result :");
	ft_putnbr_base(625+25*5*2+25*3+5*4,"01234");
	printstr("\nExpect result :bhhhhhhhhhh\n"); 
	printstr("User   result :");
	ft_putnbr_base(2147483647,"abcdefgh");
	printstr("\nExpect result :7fffffff\n"); 
	printstr("User   result :");
	ft_putnbr_base(2147483647,"0123456789AbCdEf");
	printstr("\nExpect result :1111111111111111111111111111111\n"); 
	printstr("User   result :");
	ft_putnbr_base(2147483647,"01");
	printstr("\n");
	return (0);
}
*/

int	kn_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (*str != 0)
	{
		str ++;
		i ++;
	}
	return (i);
}

int	kn_verify(char *str)
{
	char	is_seen[256];
	int		is_seen_index;
	int		index;

	is_seen[0] = '\0';
	index = 0;
	while (*str != 0)
	{
		if (*str == '-' || *str == '+')
			return (0);
		is_seen_index = 0;
		while (is_seen[is_seen_index] != 0)
		{
			if (is_seen[is_seen_index] == *str)
				return (0);
			is_seen_index ++;
		}
		is_seen[index] = *str;
		is_seen[++index] = '\0';
		str ++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	c;
	int		base_len;
	int		carry;

	base_len = kn_strlen(base);
	if (base_len <= 1 || !kn_verify(base))
	{
		return ;
	}
	carry = 0;
	if (nbr == 0)
	{
		c = base[0];
		write(1, &c, 1);
	}
	if (nbr < 0)
	{
		carry = 1;
		nbr ++;
		nbr *= -1;
		c = '-';
		write(1, &c, 1);
	}
	kn_putchar_recur(nbr, base_len, base, carry);
}

void	kn_putchar_recur(int nbr, int base, char *base_str, int carry)
{
	char			c;
	unsigned int	number;

	number = nbr;
	if (nbr > 0)
	{
		c = base_str[(number + carry) % base];
		kn_putchar_recur((number + carry) / base, base, base_str, 0);
		write(1, &c, 1);
	}
}
