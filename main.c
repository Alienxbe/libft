/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                           a                     +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:21:24 by mykman            #+#    #+#             */
/*   Updated: 2021/11/08 00:35:21 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	main(void)
{
	char	*line;
	int		fd;
	int		ret;

	fd = open("test.txt", O_RDONLY);
	ret = 1;
	while (ret)
	{
		line = NULL;
		ret = get_next_line(fd, &line);
		ft_printf("%d: '%&s'\n", ret, line);
		if (ret >= 0)
			free(line);
	}
	close(fd);
	return (0);
}
