/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 16:57:38 by mykman            #+#    #+#             */
/*   Updated: 2021/11/08 00:35:58 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_base(char *base)
{
	if (ft_strlen(base) <= 1)
		return (0);
	while (*base)
	{
		if (ft_isspace(*base) || *base == '+' || *base == '-'
			|| ft_index(base + 1, *base) >= 0)
			return (0);
		base++;
	}
	return (1);
}

void	ft_putnbr_base_fd(int n, char *base, int fd)
{
	unsigned int	nb;
	size_t			len_base;

	if (!check_base(base))
		return ;
	len_base = ft_strlen(base);
	if (n < 0)
	{
		nb = -n;
		ft_putchar_fd('-', fd);
	}
	else
		nb = n;
	if (nb >= len_base)
		ft_putnbr_base_fd(nb / len_base, base, fd);
	ft_putchar_fd(base[nb % len_base], fd);
}
