/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebossue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 20:38:13 by jebossue          #+#    #+#             */
/*   Updated: 2016/11/03 22:01:58 by jebossue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(2, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_display(char *str)
{
	int		fd;
	int 	ret;
	char	buf[10];

	fd = open(str, O_RDONLY);
	if (fd == -1)
		ft_putstr("open error");
	while ((ret = read(fd, buf, 9)) > 0)
	{
	//	printf("%d\n", ret);
		if (ret == -1)
			return (0);
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
		ft_putstr("close error");
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	else
		ft_display(av[1]);
	return (0);
}
