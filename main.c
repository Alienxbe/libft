/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:21:24 by mykman            #+#    #+#             */
/*   Updated: 2022/04/22 01:41:06 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	line = NULL;
	for (int i = 0; i < 10 ; i++)
	{
		ft_printf("%d : ", get_next_line(fd, &line));
		ft_printf("%p (%03d): ", line, *line);
		ft_printf("%s\n", line);
		if (line)
			free(line);
	}
	return (0);
}
