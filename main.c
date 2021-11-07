/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:21:24 by mykman            #+#    #+#             */
/*   Updated: 2021/11/08 00:35:21 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

/*static void	ft_putstr_non_printable_fd(const char *s, int fd)
{
	while (s && *s)
	{
		if (!ft_isprint(*s))
		{
			ft_putchar_fd('\\', fd);
			ft_utoa_base()
		}
	}
}
*/
int	main(void)
{
	ft_printf("%d\n", ft_isspace('\r'));
	ft_putnbr_base_fd(132, "012", 1);
	
	/*char	*line;
	int		fd;
	int		ret;

	fd = open("test.txt", O_RDONLY);
	for (int i = 0; i < 1; i++)
	{
		line = NULL;
		ret = get_next_line(fd, &line);
		ft_printf("%d: '%s'\n", ret, line);
		if (ret > 0)
			free(line);
	}
	close(fd);*/
	return (0);
}
