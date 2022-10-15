/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuethan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:28:31 by msuethan          #+#    #+#             */
/*   Updated: 2022/10/14 08:10:03 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print(char *str);
int		ft_rush(int argc, char **argv);
int		ft_strlen(char *str);
int		ft_strtoint(char *str);

void	rush(int x, int y);

void	ft_print(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		i ++;
	}
}

int	ft_rush(int argc, char **argv)
{
	char	*x_str;
	char	*y_str;
	int		x_int;
	int		y_int;

	if (--argc != 2)
	{
		ft_print("ERROR: Please enter two arguments.\n");
		return (1);
	}
	x_str = *(argv + 1);
	y_str = *(argv + 2);
	x_int = ft_strtoint(x_str);
	y_int = ft_strtoint(y_str);
	if (x_int <= 0 || y_int <= 0)
	{
		ft_print("ERROR: Please enter numbers's value more than zero.\n");
		return (1);
	}
	rush(x_int, y_int);
	return (0);
}

int	main(int argc, char **argv)
{
	return (ft_rush(argc, argv));
}
