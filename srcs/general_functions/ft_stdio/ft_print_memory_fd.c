/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 01:51:07 by maykman           #+#    #+#             */
/*   Updated: 2022/05/06 02:00:50 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print_hex(unsigned char *ptr, int size, int i, int fd)
{
	char	*base_hexa;
	int		j;

	base_hexa = "0123456789abcdef";
	j = -1;
	while (++j < 16)
	{
		if (!(j % 2))
			ft_putchar_fd(' ', fd);
		if (i + j >= size)
			ft_putstr_fd("  ", fd);
		else
		{	
			ft_putchar_fd(base_hexa[ptr[i + j] / 16], fd);
			ft_putchar_fd(base_hexa[ptr[i + j] % 16], fd);
		}
	}
	ft_putchar_fd(' ', fd);
}

static void	ft_print_char(unsigned char *ptr, int size, int i, int fd)
{
	int	j;

	j = -1;
	while (++j < 16 && i + j < size)
	{
		if (ptr[i + j] < 32 || ptr[i + j] > 126)
			ft_putchar_fd('.', fd);
		else
			ft_putchar_fd(ptr[i + j], fd);
	}
	ft_putchar_fd('\n', fd);
}

void	*ft_print_memory_fd(void *addr, unsigned int size, int fd)
{
	char			*base_hexa;
	unsigned int	i;
	int				j;

	base_hexa = "0123456789abcdef";
	i = 0;
	while (i < size)
	{
		j = 16;
		while (--j > -1)
			ft_putchar_fd(base_hexa[(long)(addr + i) >> (j * 4) & 0xf], fd);
		ft_putchar_fd(':', fd);
		ft_print_hex((unsigned char *)addr, size, i, fd);
		ft_print_char((unsigned char *)addr, size, i, fd);
		i += 16;
	}
	return (addr);
}
