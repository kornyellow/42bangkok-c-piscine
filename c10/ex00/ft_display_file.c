/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:54:12 by korojrat          #+#    #+#             */
/*   Updated: 2022/10/20 22:31:00 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str ++;
	}
}

int	ft_display_file(char *file_name)
{
	int		file_descriptor;
	int		read_res;
	char	buffer[2048];

	file_descriptor = open(file_name, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	while (1)
	{
		read_res = read(file_descriptor, buffer, 1024);
		if (read_res == -1)
			return (0);
		if (read_res == 0)
			break ;
		write(1, buffer, read_res);
	}
	if (close(file_descriptor) == -1)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (!ft_display_file(*++argv))
		ft_putstr("Cannot read file.\n");
	return (0);
}
