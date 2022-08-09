/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 01:42:00 by maykman           #+#    #+#             */
/*   Updated: 2022/08/06 23:11:52 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	un;

	un = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		un = -n;
	}
	if (un >= 10)
		ft_putnbr_fd(un / 10, fd);
	ft_putchar_fd('0' + un % 10, fd);
}
