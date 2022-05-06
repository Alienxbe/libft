/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 16:57:38 by mykman            #+#    #+#             */
/*   Updated: 2022/05/06 01:57:00 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_base(char *base)
{
	int	i;

	if (!base)
		return (0);
	i = -1;
	while (base[++i])
		if (ft_strchr(base + i + 1, base[i]) || ft_strchr("+-", base[i]))
			return (0);
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int n, char *base, int fd)
{
	unsigned int	un;
	size_t			base_len;

	base_len = check_base(base);
	if (!base_len)
		return ;
	un = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		un = -n;
	}
	if (un >= base_len)
		ft_putnbr_base(un / base_len, base, fd);
	ft_putchar_fd(base[un % base_len], fd);
}
