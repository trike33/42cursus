/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:22:10 by jfontbon          #+#    #+#             */
/*   Updated: 2025/05/05 12:22:14 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

void	ft_putstr(int fd, char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(fd, &str[i++], 1);
}

int	print_file(char *filename)
{
	int		fd;
	ssize_t	bytes;
	char	buffer[BUF_SIZE];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr(2, "Cannot read file\n");
		return (1);
	}
	bytes = read(fd, buffer, BUF_SIZE);
	while (bytes > 0)
	{
		write(1, buffer, bytes);
		bytes = read(fd, buffer, BUF_SIZE);
	}
	close(fd);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr(2, "File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr(2, "Too many arguments.\n");
		return (1);
	}
	return (print_file(argv[1]));
}
